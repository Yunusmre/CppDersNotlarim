#include <iostream>

// Visual studio c++ ders 15

using namespace std;
int main18() {
	int dizi[2][3] = { {21, 34, 42}, // 2x3 matrisli dize, 2 satýr 3 sütun
					 {22, 35, 47} };

	//cout << dizi[1][1] << endl; // 35 sayýsýný yazdýrýr

	for (int i = 0; i < 2; i++) { // for döngüsü ile tüm çok boyutlu dizeyi düzenli þekilde yazdýrma
		for (int k = 0; k < 3; k++) {
			cout << dizi[i][k] << " ";
		}
		cout << endl;
	}

	return 0;
}
