#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tekcift(){
	int sayi;
    printf("Say� Gir: ");
    scanf("%d", &sayi);
 
    
    if(sayi % 2 == 0)
        printf("%d �ift.", sayi);
    else
        printf("%d Tek.", sayi);
}

int main(int argc, char *argv[]) {
	tekcift();
	return 0;
}
