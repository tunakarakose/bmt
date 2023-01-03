#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int pztf(){
	int sayi;
  printf("Bir sayi girin:");
  scanf("%d",&sayi);
  if (sayi==0)
    printf("Girilen sayi sifir");
  else if (sayi > 0)
    printf("Girilen sayi pozitif");
  else
    printf("Girilen sayi negatif");
}

int main(int argc, char *argv[]) {
	
	
	pztf();
	
	return 0;
	
	
	
}
