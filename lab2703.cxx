#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float fiyat = 17.99;
	int banknot200 = 20000;
	int banknot100 = 10000;
	int banknot50 = 5000;
	int banknot20 = 2000;
	int banknot10 = 1000;
	int banknot5 = 500;
	int banknot1 = 100;
	int kurus50 = 50;
	int kurus25 = 25;
	int kurus10 = 10;
	int kurus5 = 5;
	int kurus1 = 1;
	int sayibanknot200;
	int sayibanknot100;
	int sayibanknot50;
	int sayibanknot20;
	int sayibanknot10;
	int sayibanknot5;
	int sayibanknot1;
	int sayikurus50;
	int sayikurus25;
	int sayikurus10;
	int sayikurus5;
	int sayikurus1;
	float odenenpara = 20.00;
	float ondalik;
	int paraustu;
	ondalik = odenenpara - fiyat;
	paraustu = ondalik * 100;
	
	printf("Urun Fiyati: %f TL\n",fiyat);
	printf("Odenen Para: %f TL\n",odenenpara);
	printf("Para Ustu: %f TL - %f TL = %d Kurus\n\n", odenenpara,fiyat, paraustu);
	
	printf("Verilecek;\n");
	
	sayibanknot200 = paraustu/banknot200;
	paraustu = paraustu - banknot200 * sayibanknot200;
	printf("200 TL'lik Banknot Sayisi: %d\n", sayibanknot200);
	
	sayibanknot100 = paraustu/banknot100;
	paraustu = paraustu - banknot100 * sayibanknot100;
	printf("100 TL'lik Banknot Sayisi: %d\n", sayibanknot100);
	
	sayibanknot50 = paraustu/banknot50;
	paraustu = paraustu - banknot50 * sayibanknot50;
	printf("50 TL'lik Banknot Sayisi: %d\n", sayibanknot50);
	
	sayibanknot20 = paraustu/banknot20;
	paraustu = paraustu - banknot20 * sayibanknot20;
	printf("20 TL'lik Banknot Sayisi: %d\n", sayibanknot20);
	
	sayibanknot10 = paraustu/banknot10;
	paraustu = paraustu - banknot10 * sayibanknot10;
	printf("10 TL'lik Banknot Sayisi: %d\n", sayibanknot10);
	
	sayibanknot5 = paraustu/banknot5;
	paraustu = paraustu - banknot5 * sayibanknot5;
	printf("5 TL'lik Banknot Sayisi: %d\n", sayibanknot5);
	
	sayibanknot1 = paraustu/banknot1;
	paraustu = paraustu - banknot1 * sayibanknot1;
	printf("1 TL'lik Banknot Sayisi: %d\n", sayibanknot1);
	
	sayikurus50 = paraustu/kurus50;
	paraustu = paraustu - kurus50 * sayikurus50;
	printf("50 Kurus Sayisi: %d\n", sayikurus50);
	
	sayikurus25 = paraustu/kurus25;
	paraustu = paraustu - kurus25 * sayikurus25;
	printf("25 Kurus Sayisi: %d\n", sayikurus25);
	
	sayikurus10 = paraustu/kurus10;
	paraustu = paraustu - kurus10 * sayikurus10;
	printf("10 Kurus Sayisi: %d\n", sayikurus10);
	
	sayikurus5 = paraustu/kurus5;
	paraustu = paraustu - kurus5 * sayikurus5;
	printf("5 Kurus Sayisi: %d\n", sayikurus5);
	
	sayikurus1 = paraustu/kurus1;
	paraustu = paraustu - kurus1 * sayikurus1;
	printf("1 Kurus Sayisi: %d\n", sayikurus1);

	return 0;
}
