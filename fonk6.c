#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int hesaplama() {
	int sayi1 , sayi2;
	char islem;
	float sonuc;
	printf("Lutfen ilk sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Lutfen ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	printf("Yapmak istediginiz islemin isaretini giriniz.\n");
	islem = getch();
	
	switch(islem){
	
		case '+':
			sonuc = sayi1+sayi2;
			printf("Sonuc: %f",sonuc);
			break;
			
		case '-':
			sonuc = sayi1-sayi2;
			printf("Sonuc: %f",sonuc);
			break;
		case	'*':
			sonuc = sayi1*sayi2;
			printf("Sonuc: %f",sonuc);
			break;
		case	'/':
			sonuc = sayi1/sayi2;
			printf("Sonuc: %f",sonuc);
			break;
			
			default:	printf("Lutfen gecerli bir isaret giriniz");			
					
	}
	
	
	
	
	
}







int main(int argc, char *argv[]) {
	hesaplama();

	return 0;
	
	
}
