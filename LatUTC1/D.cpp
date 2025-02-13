#include <stdio.h>

int main(){
	int ban, pintu, kaca;
	// 4 ban, 2 pintu, 1 kaca
	scanf("%d %d %d", &ban, &pintu, &kaca);
	int totByBan = 0;
	int totByPintu = 0;
	int totByKaca = 0;
	totByBan = ban/4;
	if(ban % 4 != 0){
		totByBan = (ban/4) + 1;
	}
	totByPintu = pintu/2;
	if(pintu % 2 != 0){
		totByPintu = (pintu/2) + 1;
	}
	totByKaca = kaca;
	if(kaca % 4 != 0){
		totByKaca = (kaca/4) + 1;
	}
	
	int jmlMobil;
	if(totByBan > totByPintu && totByBan > totByKaca){
		jmlMobil = totByBan;
	}
	else if(totByPintu > totByBan && totByPintu > totByKaca){
		jmlMobil = totByPintu;
	}
	else{
		jmlMobil = totByKaca;
	}
	
	// 12 2 2
	// 3 0 4 1
	
	int kurangBan = (4*jmlMobil) - ban;
	int kurangPintu = (2*jmlMobil) - pintu;
	int kurangKaca = (jmlMobil) - kaca;
	
	printf("%d %d %d %d\n", jmlMobil, kurangBan, kurangPintu, kurangKaca);
	return 0;
}
