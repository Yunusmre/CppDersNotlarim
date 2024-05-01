#include <iostream>

// Visual studio c++ ders 21

using namespace std;

int main24_1() {

	int* p = new int;  // Bellekten Yer ay�rma (Program d���nda kullan�lamaz)
	*p = 7; // p, point�r�na 7 de�eri atand�
	cout << p << endl; // p memory adresi yaz�ld�

	cout << *p << endl; // p de�eri yaz�ld�
	delete p; // p de�eri silindi (p de�eri silinir, pointer kal�r kullan�labilir)
	p = NULL; // p de�eri null (bo�) olarak ayarland�

	if (p != NULL) // p de�eri bo� de�ilse yazd�rs�n
		cout << p << endl; //p adresi yazd�r�ld� 
	cout << *p << endl;  // silinen de�er okunmaya �al���ld� (Hata verir)

	p = new int; //kullan�lacaksa tekrar �a�r�lmal�
	*p = 10; // p = 10 oldu


	return 0;
}

int main24_2() {
	int x;
	cout << "Arrayin kac tam sayi icerecegini yaziniz: ";
	cin >> x;
	int* p = new int[x]; // p ad�nda array olu�turma ve kullan�c�dan al�nan kadar yer ay�rma

	for (int i = 0; i < x; i++) {  // ayr�lan yer kadar de�er al�n�yor ve array a ekleniyor
		cin >> p[i];
	}

	int top = 0;
	for (int i = 0; i < x; i++) { // arraye al�nan de�erler toplan�yor
		top += p[i];
	}

	cout << "Toplam: " << top << endl;

	delete[] p; //array memoryde yer kaplamamas� i�in siliniyor

	return 0;
}