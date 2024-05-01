#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// Visual studio c++ ders 8

using namespace std;
int main8() {
	
	int sayi1, sayi2;
	printf("Ilk sayiyi giriniz : ");
	scanf("%d", &sayi1);

	cout << "Ikinci sayiyi giriniz: ";
	cin >> sayi2;

	if (sayi1 < 0 && sayi2 < 0) {
		cout << "Iki sayida negatiftir" << endl;
	}
	else if (sayi1 > 0 && sayi2 > 0) {
		cout << "Iki sayida pozitiftir" << endl;
	}
	else if (sayi1 == 0 && sayi2 == 0) {
		cout << "Sayilarin ikiside 0'dir" << endl;
	}
	else{
		cout << "Sayilarin biri negatif, biri pozitiftir! " << endl;
	}

	/*
	== eþittir
	!= eþit deðildir
	< Küçüktür
	> Büyüktür
	>= büyükse veya eþitse
	<= Küçükse veya eþitse
	*/

	return 0;
}

