#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fi(){
	
	 int ilksayi=1;
 int ikincisayi=1;
 int i;
 int m;
 printf("serinin kac adim gitmesini istiyorsunuz: ");
 scanf("%d",&m);
 printf("%d\n%d\n",ilksayi,ikincisayi);
 
 for(i=0; i<m; i++)
 {
  ilksayi=ilksayi+ikincisayi;
  ikincisayi=ilksayi+ikincisayi;
  printf("%d\n%d\n",ilksayi,ikincisayi);
 }
	
}

int main(int argc, char *argv[]) {
fi();


	return 0;
}
