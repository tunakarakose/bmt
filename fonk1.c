#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int q;

int toplama(int q){
	
	int i=0;
	int toplam=0;
	
	
	
	
	while(i<=q){
		toplam +=i;
		i++;
	}
	printf("toplam degeri: %d",toplam);
	
	
}

int main(int argc, char *argv[]) {
	
	
	printf("bir q sayisi giriniz: ");
	scanf("%d",&q);
	toplama(q);
	return 0;
}
