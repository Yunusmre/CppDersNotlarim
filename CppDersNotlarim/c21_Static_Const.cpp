#include <iostream>

// Visual studio c++ ders 18

using namespace std;


void KisiEkle1() { //sayac 1
	static int KisiSayaci = 0; //Hiçbir zaman silinmez, her zaman kaldýðý sayýdan devam eder.
	KisiSayaci += 1;
	cout << "Kiþi Sayacý 1 : Giren Kiþi Sayýsý: " << KisiSayaci << endl;
}

void KisiEkle2() { // sayac 2
	static int KisiSayaci = 0; //ayný isimde 2 tane static olsada ikisi karýþmaz
	KisiSayaci += 1;
	cout << "Kiþi Sayacý 2 : Giren Kiþi Sayýsý: " << KisiSayaci << endl;
}

int main21() {
	setlocale(LC_ALL, "Turkish");


	const float pi = 3.14; //x deðeri sabit, deðiþtirilemez
	
	KisiEkle1();
	KisiEkle1();
	KisiEkle1();

	cout << endl;

	KisiEkle2();
	KisiEkle2();


	return 0;
}