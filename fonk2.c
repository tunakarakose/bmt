#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void hatayibas(int hata){
		printf("hata kodu %d",hata);
		
	}

	
int main(int argc, char *argv[]) {
	
	int sayi;
	printf("Lutfen pozitif bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi<0){
		hatayibas(404);
		
	}else{
		printf("Tebrikler");
	}
	
	
}
