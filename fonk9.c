#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void net(){
		int trd,try,md,my,sd,sy,fd,fy;
	float net;
	char ders;
	printf("Ders turunu giriniz: ");
	scanf("%s",&ders);
	
	switch(ders){
		
		case 't':
		printf("Turkce dersinden yaptiginiz doðru soru sayisini giriniz: ");
		scanf("%d",&trd); 
		printf("Turkce dersinden yaptiginiz yanlis soru sayisini giriniz: ");
		scanf("%d",&try);
		
		net=trd-(0.25*try);
		printf("Turkce dersinde yaptiginiz net sayisi: %f",net);
		break;
		case 'm':
		printf("Matematik dersinden yaptiginiz doðru soru sayisini giriniz: ");
		scanf("%d",&md); 
		printf("Matematik dersinden yaptiginiz yanlis soru sayisini giriniz: ");
		scanf("%d",&my);
		
		net=md-(0.25*my);
		printf("Matematik dersinde yaptiginiz net sayisi: %f",net);
		break;
		
		case's':
			printf("Sosyal Bilimler dersinden yaptiginiz doðru soru sayisini giriniz: ");
		scanf("%d",&sd); 
		printf("Sosyal Bilimler dersinden yaptiginiz yanlis soru sayisini giriniz: ");
		scanf("%d",&sy);
		
		net=sd-(0.25*sy);
		printf("Sosyal bilimler dersinde yaptiginiz net sayisi: %f",net);
		break;
		
		case 'f':
			printf("Fen Bilimleri dersinden yaptiginiz doðru soru sayisini giriniz: ");
		scanf("%d",&fd); 
		printf("Fen Bilimleri dersinden yaptiginiz yanlis soru sayisini giriniz: ");
		scanf("%d",&fy);
		
		net=fd-(0.25*fy);
		printf("Fen Bilimleri dersinde yaptiginiz net sayisi: %f",net);
		break;
		
		default: printf("Lutfen gecerli bir ders kodu giriniz"); break;
	}
	
	
	
}
int main(int argc, char *argv[]) {

	
	net();
	
	
	
	
	
	
	
	
	
	return 0;
}
