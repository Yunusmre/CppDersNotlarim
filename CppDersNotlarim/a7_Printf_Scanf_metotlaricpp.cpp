#define _CRT_SECURE_NO_WARNINGS //scanf fonksiyonu eski (c dilide) kullanýldýðý için ilk baþa bu yazdýrýlmalýdýr
#include <iostream>

// Visual studio c++ ders 7

using namespace std;

int main7() { // c dilinden geçenler
	int x = 5;
	float y = 3.2;

	printf("Sayilar: x: %d ve y: %.1f", x, y);  


	cout << endl << endl;


	char metin[] = "Merhabaa"; // c dilinde string yerine char kullanýlýr
	printf("Metin: %s", metin); 


	/* 
	printf fonksiyonu ile ekrana yazý yazdýrýrken deðiþkenler týrnak içinde
	belirtilir ve týrnaktan sonra virgül ile eklenir
	*/

	cout << endl << endl;

	// int ve float
	scanf("%f", &y);  //& - adres iþareti
	printf("%f", y);

	cout << endl;

	//string
	char isim[25]; //maximum 24 karakter kullanýlabilir (1 null karakter vardýr yani cümle sonunu belirler /0 dýr.)
	printf("Lutfen isminizi giriniz: ");
	scanf("%s", isim);
	printf("Merhaba %s", isim);

	/*
	kullanýcýdan veri almak için kullanýlýr. Ýlk olarak alýnýcak deðer týrnak içinde belirtilir
	sonra aktarýlacak deðiþken & yanýna (int ve float için) yazýlýr. scanf("%d", &x)
	*/

	/*
	%d - int deðiþkenler için
	%f - float deðiþkenler için
	%.1f - float deðiþkeni yazarken hassasiyet ayarlanýr. 3.2 sayýsý için: %.1f = 3.2, %.2.f = 3.20 yazdýrýr (sade yazdýrma)

	%s - string ifadeler için kullanýlýr
	*/
	return 0;
}