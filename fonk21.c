#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sure(){
	
    float yol;
    float zaman;
    float hiz;
    
    printf("Gideceginiz mesafe (km) : ");
    scanf("%f",&yol);
    printf("Gitmek istediginiz sure (saat) :");
    scanf("%f",&zaman);
    
    hiz = yol / zaman;
    printf("Gitmeniz gerek hiz = %f",hiz);
}

int main(int argc, char *argv[]) {
	sure();
	
	return 0;
}
