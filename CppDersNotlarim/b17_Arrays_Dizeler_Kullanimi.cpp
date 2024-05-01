#include <iostream>

// Visual studio c++ ders 14

using namespace std;
int main17() {
	setlocale(LC_ALL, "Turkish");

	//string float vb. deðiþkenler kullanýlabilir
	int arr[5]; //arr adýnda dize oluþturdum ve 5 tane (0-4, 4 dahil) elemaný olabilir
	arr[0] = 20; // arr dizesine 0. elemanýný 20 olarak belirledim
	arr[1] = 33; // arr dizesine 1. elemanýný 33 olarak belirledim
	arr[2] = 45;
	arr[3] = 51;
	arr[4] = 62;

	int dizi[5] = { 20, 26, 45, 78, 54 }; // Bu þekildede dize oluþturulabilir

	cout << arr[2] << endl;; //arr dizesinin 2. elemanýný yazdýrdým

	for (int i = 0; i < 5; i++) { //arr dizesindeki elemanlarý sýrayla yazdýrýr 1.
		cout << arr[i] << endl;
	}

	cout << "arrayýn ilk elemanýný(deðerini) giriniz: ";
	cin >> arr[0];

	cout << endl << endl;

		//Ek Kýsým

	// sizeof(arr)    : dizenin bellekte kapladýðý alaný byte cinsinden döndürür
	// sizeof(arr[0]) : dizenin bir elemanýnýn bellekte kapladýðý alaný byte cinsinden döndürür
	int arrSize = sizeof(arr) / sizeof(arr[0]);  //arr dizesindeki eleman sayýsý hesaplama
	for (int k = 0; k < arrSize; k++) { //arr dizesindeki elemanlarý sýrayla yazdýrýr 2.
		cout << arr[k] << endl;
	}

		//Ek kýsým

	return 0;
}