#include <iostream>

// Visual studio c++ ders 11

using namespace std;
int main12() {

	//1'den 20'ye kadar tum sayilari ekrana yazdiran bir for loop yazalim

	//i isminde int deðiþken tanýmladýk, i 20'den küçük veya eþit olduðu sürece çalýþýr ve her çalýþtýðýnda i deðerine 1 ekler
	for (int i = 1;i <= 20; i++) {
		cout << i << endl;
	}

	cout << endl << endl << endl;

	//1'den 20'ye kadar çift sayilari ekrana yazdiran bir for loop yazalim
	for (int j = 1; j <= 20; j++) {
		if (j % 2 == 0) {
			cout << j << endl;
		}
	}

	cout << endl << endl << endl;

	//1'den 20'ye kadar 5'in katlarýný ekrana yazdiran bir for loop yazalim
	for (int k = 1; k <= 20; k ++) {
		if (k % 5 == 0) {
			cout << k << endl;
		}
	}


	return 0;
}
