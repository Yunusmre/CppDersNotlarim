#include <iostream>

// Visual studio c++ ders 22

using namespace std;

void FonksiyonDegistir(int arr[], int size) {
	for (int i = 0; i <= size; i++) {
		arr[i] = arr[i] + i;
	}
}


int main26() {
	int Sayilar[] = { 3, 9, 12, 15 , 18 , 1, 3 };

	FonksiyonDegistir(Sayilar, 6);

	for (int i = 0; i <= 6; i++) {
		cout << Sayilar[i] << " ";
	}

	return 0;
}