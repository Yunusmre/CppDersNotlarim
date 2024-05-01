#include <iostream>

// Visual studio c++ Sýnav 3

using namespace std;
int main15() {

	//	c++ Sýnav Sorusu
	//
	//	Kullanýcýnýn konsoldan girdiði sayýya göre ekrana aþþaðýdaki þekilde çýktý veren programý yazýnýz:
	//
	//	Lutfen Bir Sayi Giriniz: 4
	//	1
	//	2 2 
	//	3 3 3
	//	4 4 4 4

	int sayi;

	cout << "Lutfen Bir Sayi Giriniz: ";
	cin >> sayi;

	for (int i = 0; i <= sayi; i++) {
		for (int k = 0; k < i; k++) {
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}
