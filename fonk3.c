#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int v;
int f;
int orthesapla(){
	
	float ortalama;
	ortalama = (v+f)/2;
	printf("Donem sonu ortalamanýz: %f\n",ortalama);
}












int main(int argc, char *argv[]) {
	int i=0;
	int a;
	while(i<=a){
	
	printf("Vize notunuzu giriniz: ");
	scanf("%d",&v);
	if(v!=-1){
		printf("final notunuzu giriniz: ");
		scanf("%d",&f);
		
		orthesapla();
	}else {
		break;
	}
	
}
	
	
	
	return 0;
}
