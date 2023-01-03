#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void zam(){
	int maas;
    int zam;
    int yenimaas;
    
    printf("Maasi giriniz: ");
    scanf("%d",&maas);
    printf("Zam yuzdesini giriniz(0,100): ");
    scanf("%d",&zam);
    
    yenimaas = maas + (maas * zam  / 100);
    printf("Yeni maasiniz = %d",yenimaas);
	
}

int main(int argc, char *argv[]) {
	
	zam();
	return 0;
}
