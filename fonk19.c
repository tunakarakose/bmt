#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

ters(){
	
	int n, ters = 0, kalan;
    printf("Sayý: ");
    scanf("%d", &n);
    while (n != 0) {
        kalan = n % 10;
        ters = ters * 10 + kalan;
        n /= 10;
    }
    printf("Ters = %d", ters);
}

int main(int argc, char *argv[]) {
	ters();
	
	return 0;
}
