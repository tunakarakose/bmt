#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float alan(){
	
	float alan;
	float kenar1;
	float kenar2;
	printf("kenar uzunlugunu giriniz: ");
	scanf("%f",&kenar1);
	
	printf("diger kenar uzunlugunu giriniz: ");
	scanf("%f",&kenar2);
	
	alan= kenar2*kenar1;
	printf("Alan boyutu: %f mkare",alan);
	
}


int main(int argc, char *argv[]) {
	
	alan();
	
	return 0;
}
