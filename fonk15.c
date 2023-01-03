#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void tasit_Ucret(){
	char tur;
  int saat, ucret;
  printf("Otobus icin: o\nkamyonet icin: k\nmotosiklet icin: m\n >>>");
  scanf("%c",&tur);
  printf("Sure\n >>>");
  scanf("%d",&saat);
  switch(tur){
    case 'o': 
    ucret = 30;
    printf("Otobus sectiniz \n");
    printf("Odeneck ucret: %d", ucret*saat);
    break;
    case 'k': 
    printf("Kamyonet sectiniz \n");
    ucret = 20;
    printf("Odeneck ucret: %d", ucret*saat);
    break;
    case 'm': 
    printf("Motosiklet sectiniz \n");
    ucret = 10;
    printf("Odeneck ucret: %d", ucret*saat);
    break;
    default: printf("Yanlis arac kodu girdiniz");
  }
}


int main(int argc, char *argv[]) {
	tasit_Ucret();
	return 0;
}
