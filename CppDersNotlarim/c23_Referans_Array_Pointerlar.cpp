#include <iostream>

// Visual studio c++ ders 20

using namespace std;


int main23_1() {

	int arr[] = { 34, 47, 85 }; //arr ad�nda array dizesi olu�turdum

	int* p;  // p ad�nda pointer olu�turdum
	p = arr; // p isimli pointera, arr dizesini verdim

	cout << p << endl;   //memoryde p adresini yazd�rd�m
	cout << arr << endl; //memoryde arr adresini yazd�rd�m (arr, p ye atand��� i�in adreesleri ayn�)

	cout << endl;

	cout << *(p + 2) << endl; // p'ye atad���m arr dizesinin 2. eleman�n� pointer ile yazd�r�yorum (85) -Y�ntem 1
	cout << p[2] << endl;  // p'ye atad���m arr dizesinin 2. eleman�n� pointer ile yazd�r�yorum (85)   -Y�ntem 2

	cout << "Ileri Seviye Bilgi: " << endl; // Ek Bilgi
	cout << p << endl; // p pointer�n� al�yoruz (adresini)
	cout << (p + 1) << endl; //p pointer adresini 1 byte artt�r�yoruz (de�i�ken t�r�ne g�re byte de�eri artar)

	return 0;
}



/* Referanlar */

void fonk(int x) { // adres kullanmadan x de�i�keni olu�turuldu, main i�ineki ile farkl� adresleri olur. �sim ayn� olmas� bir i�e yaramaz.
	x = x * 2;
	cout << "fonk icindeki x degeri: " << x << endl;
}

void fonk1(int& y_) { // verilen parametrenin adresini al�r ve adres ile i�lem yapar, isim de�i�ebilir adres ayn�d�r (&)
	y_ = y_ * 2;
	cout << "fonk1 icindeki y degeri: " << y_ << endl;
}


int main23_2() {
	//  Adressiz (&)

	int x = 5;
	fonk(x);
	cout << "main icindeki x degeri: " << x << endl;;

	cout << endl << endl;

	//  Adresli (&)

	int y = 5;
	fonk1(y);
	cout << "main icindeki y degeri: " << y << endl;;

	return 0;
}

