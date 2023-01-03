#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void ebob(){
	int n1, n2, i, n3;
 
    printf("1. Sayý: ");
    scanf("%d", &n1);
    printf("2. Sayý: ");
    scanf("%d", &n2);
 
    for(i=1; i <= n1 && i <= n2; ++i)
    {
 
        if(n1%i==0 && n2%i==0)
            n3 = i;
    }
 
    printf("%d ve  %d sayýlarýnýn OBEB' i = %d", n1, n2, n3);
}

int main(int argc, char *argv[]) {
	ebob();
	return 0;
}
