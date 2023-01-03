#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void kdv(){
	int fiyat;
    
    printf("Urunun kdv'siz fiyatini giriniz: ");
    scanf("%d",&fiyat);
    
    fiyat = fiyat + (fiyat * 18 / 100);
    
    printf("Yeni fiyat = %d",fiyat);
}

int main(int argc, char *argv[]) {
	kdv();
	return 0;
}
