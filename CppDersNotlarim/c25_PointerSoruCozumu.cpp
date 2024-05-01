#include <iostream>

// Visual studio c++ Ornek Sorular

using namespace std;

int main25() {

	int x = 5;  // x adýnda deðiþken oluþturuldu, deðer 5 verildi
	int y = 8;  // y adýnda deðiþken oluþturuldu, deðer 8 verildi
	int* p1;    // p1 adýnda pointer oluþturuldu
	int* p2;    // p2 adýnda pointer oluþturuldu

	p1 = &x;    // p1 pointýrýna, x adresi verildi
	p2 = &y;    // p2 pointýrýna, y adresi verildi
	y = y + 2;  // y deðiþkenine 2 eklendi, y deðeri 10 oldu
	*p1 = *p1 * 2;  // p1 deðerini 2 ile çarpýp p1 pointýrýna ekledi. p1 pointýrýnda x adresi olduðundan x deðeri 10 oldu
	*p1 = *p2 * *p1; // p2 pointýrý, p1 pointýrý ile çapýldý ve deðer p1 pointýrýna aktarýldý. p1 pointýrýnda x adresi olduðundan x deðeri (10 * 10) 100 oldu

	cout << *p1; // p1 pointýrý yazdýrýldý (x adresi olduðundan x yazdýrýlmýþ oldu 100)

	cout << endl;

	return 0;
}