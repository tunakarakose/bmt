#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int x;
int kareal(){
	
	int kare = x*x;
	printf("sayinin karesi: %d",kare);
	
}


int main(int argc, char *argv[]) {
	
	printf("karesini alinmasini istediginiz sayiyi giriniz: ");
	scanf("%d",&x);
	kareal();
	return 0;
}
