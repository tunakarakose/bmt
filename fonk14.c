#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ort(){
	 int nota, notb, notc;
  printf("Birinci notu girin:");
  scanf("%d",&nota);
  printf("ikinci notu girin:");
  scanf("%d",&notb);
  printf("ucuncu notu girin:");
  scanf("%d",&notc);

  if ((nota>=60 && notb>=60) || (nota>=60 && notc>=60) || (notb>=60 && notc>=60) )
    printf("Gecti");
  else
    printf("Kaldý");
}

int main(int argc, char *argv[]) {
	ort();
	
	
	return 0;
}
