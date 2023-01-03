#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fact(){
	int i, sayi;

printf("Faktoriyeli alinacak sayiyi giriniz:");

scanf("%d",&sayi);

i = sayi - 1;

while(i > 0)
{
	sayi = sayi * i ;
	i --;
	
}
	printf("Faktoriyel degeri:%d",sayi);
}

int main(int argc, char *argv[]) {

fact();


	return 0;
}
