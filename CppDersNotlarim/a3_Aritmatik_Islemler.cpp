#include <iostream>

// Visual studio c++ ders 3


using namespace std;

int main3() {
	/*
	
	+   Toplama
	-   Çýkartma
	*   Çarpma
	/   Bölme
	%   Mod alma

	*/
	int sayi1 = 80;
	int sayi2 = 90;

	sayi1++; // sayi1 deðiþkenine 1 ekler
	sayi2 += 1; //sayi2 deðiþkenine 1 ekler

	sayi1--; //sayi1 deðiþkenden 1 çýkartýr

	int ort = (sayi1 + sayi2) / 2;

	cout << "Sayilarin Ortalamasi: " << ort << endl;

	return 0;
}
