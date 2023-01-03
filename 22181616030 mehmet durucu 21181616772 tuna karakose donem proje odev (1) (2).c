#include <stdio.h>
#include <stdlib.h>


int kusak(){
	int yil1,yil2,yil3,yil4;
	char fps;
	int dongu,dongu1,dongu2,dongu3,dongu4;
	
	printf("FarklÝ turlerden listelenecek oyunlardan en sevdiklerinizi secin size hangi kusaktan oldugunuzu soyleyelim!\n\n\n");
	printf("FPS turundeki favori oyununuzu seciniz.");
	printf("\nA:Call of Duty MW2			B:Battlefield 3			C:Counter Strike 1.6			\nD:Fornite			E:Half-life");
	
	
	while(dongu!=1){
	fps = getch();
	switch (fps){
	case 'a':
	case 'A':
		yil1 = 2010; 
		dongu =1; break;	
	
	case 'b':
	case 'B':
		yil1 = 2000; 
		dongu = 1; break;	

	case 'c':
	case 'C':
		yil1 = 1990;
		dongu =1; break;	
	case 'd':
	case 'D':
		yil1 =2010;
		dongu =1;	break; 	

	case 'e':
	case 'E':
		yil1=1990; dongu=1; break;
	default: 
		dongu = 2;
	printf("\nLutfen gecerli bir secenek giriniz.\n"); break;
}
}

	
	char spor;
	printf("\n\nSpor turundeki favori oyununuzu seciniz.");
	printf("\nA:FIFA 2008			B:PES 2013			C:NBA 2K18			\nD:Rocket League			");
	
	
	while(dongu1 != 1){
	spor = getch();
	switch (spor){
	case 'a':
	case 'A':
		yil2 = 1995; 
		dongu1 =1; break;	
	
	case 'b':
	case 'B':
		yil2 = 2000; 
		dongu1 = 1; break;	

	case 'c':
	case 'C':
		yil2 = 2005;
		dongu1=1; break;	
	case 'd':
	case 'D':
		yil2 =2010;
		dongu1 =1;	break; 	

	
	default: 
		dongu1 = 2;
	printf("\nLutfen gecerli bir secenek giriniz.\n"); break;
}
}
printf("\n\nHayatta kalma turundeki favori oyununuzu seciniz.\n\n");
printf("\nA:Minecraft	B:No Man's Sky	C:The Forest\n");
int yil;
char  survival;
while(dongu2 != 1){
	survival = getch();
	switch (survival){
	case 'a':
	case 'A':
		yil = 1990; 
		dongu2 =1; break;	
	
	case 'b':
	case 'B':
		yil = 2000; 
		dongu2 = 1; break;	

	case 'c':
	case 'C':
		yil = 2010;
		dongu2 =1; break;	
	
	default: 
		dongu2 = 2;
	printf("\nLutfen gecerli bir secenek giriniz.\n"); break;
}
}
printf("\n\nMMORPG turundeki favori oyununuzu seciniz.\n\n");
printf("A:Metin 2	B:World of Warcraft	C:Guild Wars2	D:4Story");
char  mmo;
while(dongu3 != 1){
	mmo = getch();
	switch (mmo){
	case 'a':
	case 'A':
		yil3 = 2000; 
		dongu3 =1; break;	
	
	case 'b':
	case 'B':
		yil3 = 1990; 
		dongu3 = 1; break;	

	case 'c':
	case 'C':
		yil3 = 2010;
		dongu3 =1; break;	
	case 'd':
		case'D':
			yil3=2000; dongu3=1; break;
	default: 
		dongu3 = 2;
	printf("\nLutfen gecerli bir secenek giriniz.\n"); break;
}
}
int toplam;
toplam = ((yil1+yil2+yil3+yil)/4);
if(toplam>=1995&&toplam<=2000){
		printf("\n\nOyun oynamanin luks degil de standart hale geldigi bir kusakta dogmussun. Gelisen teknoloji sayesinde oyun oynamak sadece klavye mouse ile yaptigin bir sey degil. Yayin platformlari, ultra realistik oyun konsollari sayesinde her an her yerde oyun deneyimini yasiyabiliyorsun");
}else if(toplam>=2000&&toplam<=2005){
	
	printf("\n\nBilgisayar kullaniminin yayginlasmasindan sonra evine bilgisayar alinan sansli cocuklardan birisin. Biriktirdigin harcliklarla korsan CD'cide fazla fazla vakit gecirmisin. Halen oyun oynuyorsun ama üniversiteyi bitirmek icin yarizamanli olarak vakit ayirabiliyorsun oyunlara artik. ");
}else if(toplam>2005){
	printf("\n\n Internet Cafe!\n\n\n  Senin cocuklugun mahallenin ilk internet kafelerinde abilerinin oynadigi oyunlari izleyip onlarla oynamakla gecmis. Belki artik oyunlar eglenceli gelmiyor belki de calistigin icin vakit bulamiyorsin.");

}
return kusak;
}
int psikoloji(){int puan1,puan2,puan3,puan4,puan5,toplam;
	char yalniz;
	int dongu,dongu1,dongu5,dongu3,dongu4;
	
	
	printf("\nHangisini tercih edersin? \n\n             A:Yalnizlik               B:Kalabalik ortamlar               C:Moduma gore degisiklik gosterir \n");
	while(dongu!=1){
	yalniz = getch();
	switch (yalniz){
	case 'a':
	case 'A':
		puan1 = 1; 
		dongu =1; break;	
	
	case 'b':
	case 'B':
		puan1 = 5; 
		dongu = 1; break;	

	case 'c':
	case 'C':
		puan1 = 10;
		dongu =1; break;	


	default: 
		dongu = 2;
	printf("Lutfen gecerli bir secenek giriniz.\n"); break;
}
}
	char yuruyus;
	printf("\n\nUzun yuruyusler icin nasil bir hava tercih edersin? \n\n           A:Hafif karanlik ve bulutlu     B:Gunesli     C:Gun dogarken\n           D:Yagmurlu     E:Yurumem     F:Muzigim oldugu surece farketmez   \n");
	while(dongu1!=1){
	
	yuruyus = getch();
	switch(yuruyus){
		
	case 'a':
	case 'A':
		puan2 = 2;
		dongu1 = 1; break;	
		
	case 'b':
	case 'B':
		puan2 = 5;
		dongu1 = 1; break;	
				
	case 'c':
	case 'C':
		puan2 = 3;
		dongu1 = 1; break;	
		
	case 'd':
	case 'D':
		puan2 = 1;
		dongu1 = 1; break;	
		
	case 'e':
	case 'E':
		puan2 = 20;
		dongu1 = 1; break;		
	
	case 'f':
	case 'F':
		puan2 = 20;
		dongu1 = 1; break;		
		
	default: 
		dongu1 = 0;
	printf("Lutfen gecerli bir secenek giriniz.\n"); 
	}
}
	


	printf("\nBir ayrilik yasadiginde veya bir yakinini kaybettiginde buna nasil tepki verirsin?\n");
	printf("\nA:Icime atar cevreme bu kaybimi cok belli etmemeye calisirim\nB:Harap olurum ne yapacagimi bilemem\nC:Uzulurum cevremdeki insanlara bu acimi paylasir destek alirim ama hayatima devam ederim\n");
	while(dongu3!=1){
	
	char ayrilik;
	ayrilik= getch();
	
	switch(ayrilik){
	case 'a':
	case 'A':
		puan4 = 5;
		dongu3=1; break;

	case 'b':
	case 'B':
		puan4 = 1;
		dongu3=1; break;
	
	case 'c':
	case 'C':
		puan4 = 10; 
		dongu3=1; break;
		
	default:
	dongu3=0;
	 printf("Lutfen gecerli bir secenek giriniz.\n"); break;
	}
}
	printf("\n\nEmpati kurabilme yetenegine kac puan verirsin?\n");
	printf("A:1     B:2     C:3     D:4     E:5     F:0\n");
	while(dongu4!=1){
		
	char empati;
	empati = getch();
	switch(empati){
	case 'a':
	case 'A':
		puan4 = 1;
		dongu4=1; break;	
	
	case 'b':
	case 'B':
		puan4 = 2;
		dongu4=1; break;	
	
	case 'c':
	case 'C':
		puan4 = 3;
		dongu4=1; break;	
	
	case 'd':
	case 'D':
		puan4 = 4;
		dongu4=1; break;	
	
	case 'e':
	case 'E':
		puan4 = 5;
		dongu4=1; break;	
	
	case 'f':
	case 'F':
		puan4 = 0;
		dongu4=1; break;	

	default:
	dongu4=0;
	 printf("Lutfen gecerli bir secenek giriniz.\n"); break;
}
}
	toplam= puan1+puan2+puan3+puan4;
	
	if(toplam<8){
		
		printf("\n\n\nSen depresyon bozukluguna yatkinsin!\n\n\n\n	Zaman zaman kendini caresiz ve mutsuz hissediyorsun. Belki cocuklugunda yasadigin bir olaydan dolayi ya da yeni yakin yasadigin seyler dusuncelerine ve ruhsal durumuna etki ediyor gibi gorunuyor.Yeni bir seyler denemek icin enerjin ya da hevesin yok. Kendini cogunlukla yorgun ve bitkin hissediyorsun. Bunun sonraki adimi depresyon oluyor.");
		
	}else if(toplam<15 && toplam>8){
		printf("\n\n\nSen narsistik bozukluga yatkýnsýn!\n\n\n\n	Sen her zaman en iyisini hakettigini dusunen birisin. Her seyin en iyisine sahip olmak senin bu hayattaki amacin olabilir.Basarili olmak senin için onemli ve hayatinda da bunun icin calisiyorsun. Narsistik kisilik bozukluguna yatkin olmanin sebebi hayatinda onceligi hep kendine vermen...	");
	}else if(toplam>15){
		
		printf("\n\n\nUmursamaz tavirlarin var.\n\n\n\n	Hayatinda olup bitenler duygularin uzerinde fazla bir etkiye sahip degil. Kimi zaman iyi bir seymis gibi gorunse de bu durum duygusal iliskilerine gerekli onemi vermemeni saglayabilir.");
		
	}
	
	
	
	return psikoloji;
}
int main(){
	printf("********TEST COZME UYGULAMASINA HOSGELDINIZ********\n\n\n\n");
char secenek;
printf("Cozmek istediginiz testi secin.\nA:KUSAK\nB:PSIKOLOJI\n\n\nUygulamadan cikmak icin herhangi bir tusa basin.\n");	
secenek = getch();
int i = 1;


if(secenek == 'A'|| secenek =='a'){
	kusak();
}else if(secenek =='b'|| secenek=='B'){
	psikoloji();
}else {
	
	
}


}




