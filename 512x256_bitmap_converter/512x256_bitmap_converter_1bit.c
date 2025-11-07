#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* =================== SETTINGS =================== */
/* Image dimensions in pixels */
#define IMG_W  512
#define IMG_H  256

/* Row alignment in bits (usually 8, 16, or 32) */
#define ALIGN_BITS  8

/* 1: MSB is the leftmost pixel, 0: LSB is the leftmost pixel */
#define BIT_MSB_LEFT  1

/* 1: In the source, bit=1 means white; 0: bit=1 means black */
#define SOURCE_ONE_IS_WHITE  1
/* ================================================ */


/* ================================================
   Put your raw bitmap data here (as uint16_t items).
   Example: 0xFF, 0x00, 0xAA, 0x55, ...
   Only the low byte of each uint16_t is used.
   ================================================ */
const uint16_t lcd_bitmap[] = {
    /* ▼▼▼ Insert your data here ▼▼▼ */


    /* ▲▲▲ Insert your data here ▲▲▲ */
};
/* ================================================ */

static inline unsigned roundup_unsigned(unsigned x, unsigned a) {
    return (x + a - 1u) / a * a;
}

int main(void)
{
    size_t total_bytes_in_memory = sizeof(lcd_bitmap);
    size_t elem_size = sizeof(lcd_bitmap[0]);

    const uint8_t *src_bytes_direct = NULL;
    uint8_t *src_bytes_heap = NULL;
    size_t src_len_bytes = 0;

    /* Convert to a byte stream (handle uint16_t input correctly) */
    if (elem_size == 1) {
        src_bytes_direct = (const uint8_t*)(const void*)lcd_bitmap;
        src_len_bytes = total_bytes_in_memory;
    } else if (elem_size == 2) {
        size_t elems = total_bytes_in_memory / 2;
        src_bytes_heap = (uint8_t*)malloc(elems);
        if (!src_bytes_heap) {
            fprintf(stderr, "Memory allocation failed.\n");
            return 1;
        }
        const uint16_t *p16 = (const uint16_t*)(const void*)lcd_bitmap;
        for (size_t i = 0; i < elems; ++i)
            src_bytes_heap[i] = (uint8_t)(p16[i] & 0xFFu);

        src_bytes_direct = src_bytes_heap;
        src_len_bytes = elems;
    } else {
        fprintf(stderr, "Unsupported element size: %zu\n", elem_size);
        return 1;
    }

    unsigned padded_bits_per_row = roundup_unsigned(IMG_W, ALIGN_BITS);
    unsigned bytes_per_row = padded_bits_per_row / 8u;

    printf("Input size: %zu bytes, %u bytes per row (padded to %u bits)\n\n",
           src_len_bytes, bytes_per_row, padded_bits_per_row);

    for (unsigned y = 0; y < IMG_H; ++y) {
        printf("        -- Row %u (0-%u)\n        ", y, IMG_W - 1);

        for (unsigned x = 0; x < IMG_W; ++x) {
            size_t byte_index = (size_t)y * bytes_per_row + (x >> 3);
            uint8_t b = (byte_index < src_len_bytes) ? src_bytes_direct[byte_index] : 0x00;
            unsigned bit_in_byte = (x & 7u);
            unsigned shift = BIT_MSB_LEFT ? (7u - bit_in_byte) : bit_in_byte;
            unsigned bit = (b >> shift) & 1u;
            unsigned white = SOURCE_ONE_IS_WHITE ? bit : (bit ^ 1u);
            printf("'%c'", white ? '1' : '0');   /* <-- single quotes */
            if (x < IMG_W - 1) printf(", ");
        }
        printf(",\n\n");
    }

    free(src_bytes_heap);
    return 0;
}
