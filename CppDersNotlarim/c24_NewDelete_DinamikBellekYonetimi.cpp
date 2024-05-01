#include <iostream>

// Visual studio c++ ders 21

using namespace std;

int main24_1() {

	int* p = new int;  // Bellekten Yer ayýrma (Program dýþýnda kullanýlamaz)
	*p = 7; // p, pointýrýna 7 deðeri atandý
	cout << p << endl; // p memory adresi yazýldý

	cout << *p << endl; // p deðeri yazýldý
	delete p; // p deðeri silindi (p deðeri silinir, pointer kalýr kullanýlabilir)
	p = NULL; // p deðeri null (boþ) olarak ayarlandý

	if (p != NULL) // p deðeri boþ deðilse yazdýrsýn
		cout << p << endl; //p adresi yazdýrýldý 
	cout << *p << endl;  // silinen deðer okunmaya çalýþýldý (Hata verir)

	p = new int; //kullanýlacaksa tekrar çaðrýlmalý
	*p = 10; // p = 10 oldu


	return 0;
}

int main24_2() {
	int x;
	cout << "Arrayin kac tam sayi icerecegini yaziniz: ";
	cin >> x;
	int* p = new int[x]; // p adýnda array oluþturma ve kullanýcýdan alýnan kadar yer ayýrma

	for (int i = 0; i < x; i++) {  // ayrýlan yer kadar deðer alýnýyor ve array a ekleniyor
		cin >> p[i];
	}

	int top = 0;
	for (int i = 0; i < x; i++) { // arraye alýnan deðerler toplanýyor
		top += p[i];
	}

	cout << "Toplam: " << top << endl;

	delete[] p; //array memoryde yer kaplamamasý için siliniyor

	return 0;
}