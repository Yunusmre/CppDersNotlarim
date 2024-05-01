#include <iostream>

// Visual studio c++ ders 20

using namespace std;


int main23_1() {

	int arr[] = { 34, 47, 85 }; //arr adında array dizesi oluşturdum

	int* p;  // p adında pointer oluşturdum
	p = arr; // p isimli pointera, arr dizesini verdim

	cout << p << endl;   //memoryde p adresini yazdırdım
	cout << arr << endl; //memoryde arr adresini yazdırdım (arr, p ye atandığı için adreesleri aynı)

	cout << endl;

	cout << *(p + 2) << endl; // p'ye atadığım arr dizesinin 2. elemanını pointer ile yazdırıyorum (85) -Yöntem 1
	cout << p[2] << endl;  // p'ye atadığım arr dizesinin 2. elemanını pointer ile yazdırıyorum (85)   -Yöntem 2

	cout << "Ileri Seviye Bilgi: " << endl; // Ek Bilgi
	cout << p << endl; // p pointerını alıyoruz (adresini)
	cout << (p + 1) << endl; //p pointer adresini 1 byte arttırıyoruz (değişken türüne göre byte değeri artar)

	return 0;
}



/* Referanlar */

void fonk(int x) { // adres kullanmadan x değişkeni oluşturuldu, main içineki ile farklı adresleri olur. İsim aynı olması bir işe yaramaz.
	x = x * 2;
	cout << "fonk icindeki x degeri: " << x << endl;
}

void fonk1(int& y_) { // verilen parametrenin adresini alır ve adres ile işlem yapar, isim değişebilir adres aynıdır (&)
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

