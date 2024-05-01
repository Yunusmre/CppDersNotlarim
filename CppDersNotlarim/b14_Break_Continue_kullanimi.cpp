#include <iostream>

// Visual studio c++ ders 12

using namespace std;
int main14() {
	setlocale(LC_ALL, "Turkish"); //c++ derleyicisinde türkçe karakter kullanmak için (sade string deðiþkenlerde kullanýlmaz)

	for (int i = 0; i < 20; i++){
		if ( i == 10) {
			break; //Döngü içerisinde kullanýlabiilir. break çalýþtýðý an döngü durur. (döngüden çýkar)
		}
		cout << i << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;

	for (int i = 0; i < 20; i++) {
		if (i == 10) {
			continue; //Döngü içerisinde kullanýlabiilir. continue çalýþtýðý an döngü devam eder ve alt kodlarý çalýþtýrmadan baþa döner. (koþul saðlanýrsa döngü çalýþmaya devam eder)
		}
		cout << i << endl;
	}

	return 0;
}