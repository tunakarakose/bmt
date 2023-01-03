#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void yildiz(){
	int i;
	int j;
	int n;
	
	printf("Satir sayisini giriniz: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("*");
			
		}
		
	}
	
}







int main(int argc, char *argv[]) {
	yildiz();
	return 0;
}
