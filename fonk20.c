#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void asal(){
int n, i, m = 0;
    printf("Pozitif bir say� girin: ");
    scanf("%d", &n);
 
    for (i = 2; i <= n / 2; ++i) {
 
        if (n % i == 0) {
            m = 1;
            break;
        }
    }
 
    if (n == 1) {
        printf("1 ne asal ne de bile�iktir.");
    }
    else {
        if (m == 0)
            printf("%d say�s� Asal Say�d�r.", n);
        else
            printf("%d say�s� Asal Say� de�ildir.", n);
    }}
int main(int argc, char *argv[]) {
	asal();
	return 0;
}
