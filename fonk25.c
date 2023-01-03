#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bki(){
	 float boy;
    int kilo;
    float sonuc;
    
    printf("Boyunuzu giriniz : ");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz: ");
    scanf("%d",&kilo);
    
    sonuc = kilo / (boy * boy);
    printf("Beden Kitle indeksi = %f\n",sonuc);
    
    if(sonuc < 18){
        printf("Zayif");
    }
    else if(sonuc < 25){
        printf("Normal");
    }
    else if(sonuc < 30){
        printf("Hafif sisman");
    }
    else if(sonuc < 35){
        printf("Sisman");
    }
    else{
        printf("Obez");
    }
}

int main(int argc, char *argv[]) {
	bki();
	return 0;
}
