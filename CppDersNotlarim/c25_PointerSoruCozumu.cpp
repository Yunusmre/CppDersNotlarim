#include <iostream>

// Visual studio c++ Ornek Sorular

using namespace std;

int main25() {

	int x = 5;  // x ad�nda de�i�ken olu�turuldu, de�er 5 verildi
	int y = 8;  // y ad�nda de�i�ken olu�turuldu, de�er 8 verildi
	int* p1;    // p1 ad�nda pointer olu�turuldu
	int* p2;    // p2 ad�nda pointer olu�turuldu

	p1 = &x;    // p1 point�r�na, x adresi verildi
	p2 = &y;    // p2 point�r�na, y adresi verildi
	y = y + 2;  // y de�i�kenine 2 eklendi, y de�eri 10 oldu
	*p1 = *p1 * 2;  // p1 de�erini 2 ile �arp�p p1 point�r�na ekledi. p1 point�r�nda x adresi oldu�undan x de�eri 10 oldu
	*p1 = *p2 * *p1; // p2 point�r�, p1 point�r� ile �ap�ld� ve de�er p1 point�r�na aktar�ld�. p1 point�r�nda x adresi oldu�undan x de�eri (10 * 10) 100 oldu

	cout << *p1; // p1 point�r� yazd�r�ld� (x adresi oldu�undan x yazd�r�lm�� oldu 100)

	cout << endl;

	return 0;
}