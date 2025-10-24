//Oyun Baris Sarac tarafindan yapilmistir iyi eglenceler//
#include<stdio.h> 
#include<conio.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
int x,x1,x2;
int y;
int z,z2;
int a;
int b;
int c;
int d;
int e;
int f;
int k;
int g;
int h;
int ep;
char xa;
int sdamage=35;
int pdamage=10;
int hp=100;
int mana= 0;
int armor= 20;
int kurthp = 75;

HANDLE  hConsole;

void SetColor(int ForgC)
 {
 WORD wColor;
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
               
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
}

int main(){


goto baslangic;

	
	baslangic:
		
	printf("\n____________________________\n");
		printf("THE BORLANDS \n____________________________\n(Baslamak icin bir tusa bas ve enter a tikla)");
		printf("\n(Kayit noktasindan devam etmek icin parolayi gir");
			SetColor(4);
	printf("\n(Epilepsi moduna gecmek ve komaya girmek icin 666 yaz)");
		SetColor(15);
	scanf("%d", &ep);
		if (ep==666) {
		goto epilepsi;}
			if (ep==31) {
		goto otuzbir;}
		else {goto devam;
		}
  devam:
		printf("                        [-_-_-_-_-_-_-_-]                                  \n    [-_-_-_-_-]          |             |          [-_-_-_-_-]\n     | o   o |           [  0   0   0  ]           | o   o |\n      |     |    -|       |           |       |-    |     |\n      |     |_-___-___-___-|         |-___-___-___-_|     |\n      |  o  ]              [    0    ]              [  o  |\n      |     ]   o   o   o  [ _______ ]  o   o   o   [     | ----__________\n----- |     ]              [ ||||||| ]              [     |\n      |     ]              [ ||||||| ]              [     |\n   -_-|_____]--------------[_|||||||_]--------------[_____|-_-_\n . .__________------------_____________-------------_________. .");
		printf("\n\n Eem kalesinde bir savascisin. Kral seni eem ormanindaki guvenligi saglamak icin gorevlendirdi (bir tusa bas)");
	scanf("%s", &x);
		printf("Eem ormanina dogru yola cikacaksin malzemeleri kusanmak icin sirayla bir tusa bas");
	scanf("%s", &x);
		SetColor(8);
		printf("\n      /\n     /\n    /\n   /\n--0--\n /  \n");
			SetColor(15);
		printf("\n Uzun kilic - hasar80");
	scanf("%s", &x);
		SetColor(8);
	printf("\n      ###\n      # #\n\n    #######\n    # ### #\n    # ### #\n    # ### #\n     #####\n     ## ##\n     ## ##\n     ## ##\n     ## ##           \n");
		SetColor(15);
	printf("\nZincir zirh - koruma20");
	scanf("%s", &x);
	SetColor(6);
	printf("\n#############\n#           #\n#           #\n#           #\n#     #     #\n#############\n#           #\n#############");
	SetColor(15);
	printf("\n\nuyku tulumu ve basit melzemelerle dolu sirt cantasi");
	scanf("%s", &x);
	ses:
		printf("Malzemeleri aldin ve yola koyuldun,bir ses duyuyorsun (hey)\nArkani donmek icin 1 e bas\nYoluna devam etmek icin 2 ye bas");
		scanf("%d", &x);
		if (x==1) {
		goto fahri;}
		else {printf("Arkani donmek zorundasin");
			scanf("%s", &x);
		goto ses;
		}
		fahri:
	printf("Gelen kisi sovalye fahri dir \n egitimini hatirliyor musun biraz pratik yapabiliriz?");
		printf("\n Egitime baslamak icin 1 e bas, \n Egitimi gecmek icin 2 ye bas");
	scanf("%d", &x1);
if (x1==1){
	printf("Guzell, eger bir dusmanla karsilasirsan kacabilir, konusabilir veya savasabiirsin eger senden hizliysa kacamazsin \n savas mekanikleri oldukca kolay hic beklemeden saldirabilir veya 1 tur bekleyip silah cekebilirsin \nhp senin sagligin ve savas durumunda kirmizi olur hp 0 olursa olursun hp \n simdi bana vurmak icin bir tusa bas");
	scanf("%s", &x2);
	printf("(Oldukca yeteneklisin) Tebrikler egitimi tamamladin");
	}
	printf("\n Duyduguma gore gidecegin ormanda eskiyalar ve turlu yaratiklar var dikkatli olmalisin");
		printf("\nSovalye Fahriye tesekkur etmek icin 1 e bas \nMeydan okumak icin 2 ye bas");
	scanf("%d", &y);
	if (y==2){
	printf("Sovalye Fahri kelleni aldi oldun ");
	
	goto baslangic;	
	}
	orman:
			SetColor(2);
        printf("\n      #         #\n     ###       ###\n    #####     #####\n   #######   #######\n   #######   #######\n  ######### #########\n ############ #########\n      #         #\n      #         #\n      #         #");
        	SetColor(15);
		printf("\n\nOrmana dogu yuruyorsun");
		
	scanf("%s", &z);
	 printf("Yoluna ileri seviye bir buyucu olan Ahmet Hoca cikti ve sunu soyledi; \n Sana bir soru soracagim, eger bilirsen gecebilirsin ama bilemezsen sonsuza kadar yaz okulunda kalacaksin \n Sorum su tanx in turevi nedir? \n1 secx \n2 sinkarex \n3 seckarex \n4 coseckarex \n5 cosecx");
	scanf("%d", &z2);
		if (z2==1){
	printf("yaz okuluna kaldin ve oldun ");
		goto baslangic;}
		if (z2==2){
	printf("yaz okuluna kaldin ve oldun ");
		goto baslangic;}
		if (z2==4){
	printf("yaz okuluna kaldin ve oldun ");
		goto baslangic;}
		if (z2==5){
	printf("yaz okuluna kaldin ve oldun ");
		goto baslangic;}
	
	printf("Soruyu bildin ama bir sonraki karsilasmamizda yaz okuluna gitmekten kurtulamayacaksin hahahaha \n Ormanin derinliklerindeki bekci kulesine cok yaklastin calilarin arasindan bir ses geliyor ");
	scanf("%s", &z);
	printf(" A\n             \n            AMa\n            VMMML\n          h  VMMHMA\n           VAMMMMMMA;,.\n            VHHHHHHV^^^^^\n            AMMMMM\n            AMMMMMHHha           A\n            AMMMMMMMMMmma        VA\n            MMMMMMMMMMMMMMMA      AV\n            VMMMMMMMMMMMMMMMMMA   AV\n            MM  VMMMMMMMMMMMMMMMMMV\n            MM     VMMMMMMMMMMMMMV\n____________AMA__AMMMMMMMMMMMMMMMV_________");
	printf("\n\nCalidan kurt cikti lanet olsun adamim");
	scanf("%s", &z);
	if (hp<=0){
	printf("oldun ");
 	goto baslangic;	
	}
		printf("Kurt saldiriyor ne yapacaksin? \n saldirmak icin 1 e bas \n kacmak icin 2 ye bas ");
		
	scanf("%d", &a);
	if (a==2){
	printf("Kacarken kurt seni yakaladi oldun ");
 	goto baslangic;	
	}
		printf("saldirmayi sectin ne yapacaksin(kurt sagligi 75)? \n kilic cekmek icin 1 e bas \n yumruk atmak icin 2 ye bas ");
			SetColor(4);
		printf("\nHP=");
		printf("%d",hp);
					SetColor(15);
		printf("KURT HP=");
		printf("%d",kurthp);
	scanf("%d", &b);
		if (b==1,hp=hp-15);{
		printf("kilic cektin ama kurt  bacagindan isirip 15 hasar verdi ");
	
		goto kilic;}
		if (b==2);{
			goto yumruk;}
kilic:
	printf(" Ne yapacaksin? \n kilicla vur e bas 1 \n Ciglik a 2 ye bas \n Dodgela ve 5 can yenile 3 e bas  ");
		SetColor(4);
		printf("\nHP=");
		printf("%d",hp);
					SetColor(15);
		printf("KURT HP=");
		printf("%d",kurthp);
		
		
if(hp<=0){
printf("oldun");
goto baslangic;
}
if(kurthp<=0){
printf("kurt oldu");
goto tebrik;
}
	
	scanf("%d", &c);
		if (c==1){
			hp=hp-15;
			kurthp=kurthp-35;
			goto kilic;}
		if (c==2){
			printf("ciglik attin kurt bir tur sersemledi");
			goto kilic;}
		if (c==3){
			printf("saldiridan basariyla kacindin");
			hp=hp+5;
				goto kilic; 
			}
			
			
	tebrik:
	printf("\n Tebrikler oyunu bitirdin simdi bana para ver");
	scanf("%s", &e);
	printf("\n Oyunun yapimcisi : Baris Sarac");
		goto baslangic;
	
yumruk:

    	printf("25 hasar verdin(kurt sagligi 50) ");
		printf("\n Kurt seni isirdi ve 15 hasar verdi \n Ne yapacaksin(kurt sagligi 50 hp85)? \n Yumruk at 1 \n Tekme at 2 ye bas \n dodgela ve 5 can yenile 3 e bas  ");
	scanf("%d", &f);
		if (f==1){
			printf("Kurt hamleni anladi ve seni boynuna saldirip oldurdu ");
				goto baslangic;}
			if (f==2){
			printf("Saglam bir tekme attin ve kurt kacip gitti");}
				if (f==3){
			printf("Saldiridan basariyla kacindin ama ayagin dala takildi ve oldun");
				goto baslangic; 
			}
				
goto tebrik;

otuzbir:
	printf("parolaya 31 yazdigin icin epilepsi odulu kazandin iyi eglenceler :D");
	scanf("%s", &e);

epilepsi:

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	 for(k = 1; k > 0; k++)
  {
    SetConsoleTextAttribute(hConsole, k);
    printf("%s\n","EPILEPSI	EPILEPSI	EPILEPSI	EPILEPSI	EPILEPSI	EPILEPSI	EPILEPSI	EPILEPSI	EPILEPSI	EPILEPSI	EPILEPSI");
  }
	
	system("PAUSE");
}

