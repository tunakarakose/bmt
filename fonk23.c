#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ucebol(){
	
    int sayi;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    if(sayi % 3 == 0){
        printf("Girdiginiz sayi 3'un tam katidir.");
    }
    else{
        printf("Girdiginiz sayi 3'un tam kati degildir.");
}
}
int main(int argc, char *argv[]) {
	ucebol();
	return 0;
}
