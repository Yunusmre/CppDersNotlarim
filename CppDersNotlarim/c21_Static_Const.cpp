#include <iostream>

// Visual studio c++ ders 18

using namespace std;


void KisiEkle1() { //sayac 1
	static int KisiSayaci = 0; //Hi�bir zaman silinmez, her zaman kald��� say�dan devam eder.
	KisiSayaci += 1;
	cout << "Ki�i Sayac� 1 : Giren Ki�i Say�s�: " << KisiSayaci << endl;
}

void KisiEkle2() { // sayac 2
	static int KisiSayaci = 0; //ayn� isimde 2 tane static olsada ikisi kar��maz
	KisiSayaci += 1;
	cout << "Ki�i Sayac� 2 : Giren Ki�i Say�s�: " << KisiSayaci << endl;
}

int main21() {
	setlocale(LC_ALL, "Turkish");


	const float pi = 3.14; //x de�eri sabit, de�i�tirilemez
	
	KisiEkle1();
	KisiEkle1();
	KisiEkle1();

	cout << endl;

	KisiEkle2();
	KisiEkle2();


	return 0;
}