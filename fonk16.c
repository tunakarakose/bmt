#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void kalanHesap(){
	int bolunen, bolen, bolum, kalan;
    printf("Bolunen: ");
    scanf("%d", &bolunen);
    printf("Bolen: ");
    scanf("%d", &bolen);
 

    bolum = bolunen / bolen;
 	kalan = bolunen % bolen;
 
    printf("Bolum = %d\n", bolum);
    printf("Kalan = %d", kalan);
}
int main(int argc, char *argv[]) {
	kalanHesap();
	
	
	return 0;
}
