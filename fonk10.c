#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void mat_Menu(){
	int sayi1,sayi2,secim;
	float pi;
	pi=3.14;
	float alan;
	float cevre;
	float r;
	int kup;
	printf("******************\n");
	printf("Matematik Menusu\n");
	printf("******************\n\n");
	
	printf("1-Kare de alan hesabi\n");
	printf("2-Kare de cevre hesabi\n");
	printf("3-Daiere de alan hesabi\n");
	printf("4-Daire de cevre hesabi\n");
	printf("5-Dikdortgen de alan hesabi\n");
	printf("6-Dikdortgen de cevre hesabi\n");
	printf("7-Girilen Sayinin Kupu\n\n");
	
	printf("Lutfen Seciminizi Yapiniz: ");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			printf("Karenin kenar uzunluðunu giriniz: ");
			scanf("%d",&sayi1);
			alan= sayi1*sayi1;
			printf("Karenin alani: %f metrekare",alan);
			break;
		case 2:
			printf("Karenin kenar uzulugunu giriniz: ");
			scanf("%d",&sayi1);
			cevre = 4*sayi1;
			printf("Karenin cevre uzunlugu: %f metre",cevre);	
			break;
		case 3:
			printf("Dairenin yaricapini giriniz: ");
			scanf("%f",r);
			alan = pi*r*r;
			printf("Dairenin alani: %f",alan);
			break;
		case 4:
			printf("Dairenin yaricapini giriniz: ");
			scanf("%f",&r);
			cevre = 2*pi*r;
			printf("Dairenin cevre uzunlugu: %f",cevre);
			break;
		case 5:
			printf("Dikdortgenin ilk kenar uzunlugunu giriniz: ");
			scanf("%d",&sayi1);
			printf("Dikdortgenin diger kenar uzunlugunu giriniz: ");
			scanf("%d",&sayi2);
			alan = sayi1*sayi2;
			printf("Dikdortgenin alaný: %f metrekare",alan);
			break;
		case 6:
			printf("Dikdortgenin ilk kenar uzunlugunu giriniz: ");
			scanf("%d",&sayi1);
			printf("Dikdortgenin diger kenar uzunlugunu giriniz: ");
			scanf("%d",&sayi2);
			cevre = (sayi1+sayi2)*2;
			printf("Dikdortgenin cevre uzunlugu: %f metre",cevre);		
			break;	
		case 7:
			printf("Kupunun alinmasini istediginiz sayiyi giriniz: ");
			scanf("%d",&sayi1);
			kup = sayi1*sayi1*sayi1;
			printf("%d sayisinin kupu = %d",sayi1,kup);
			break;
		default:
			printf("Lutfen gecerli bir islem seciniz."); break;		
	}
	
}

int main(int argc, char *argv[]) {
	
	mat_Menu();
	return 0;
}
