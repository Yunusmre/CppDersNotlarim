#include <iostream>
#include "otomobil.h"

// Visual studio c++ ders 26
using namespace std;

int main() {
	Otomobil otomobil1("Siyah", "Mercedes Benz E 200 d", 150);       //objele oluþturulmuþ ve özellikleri verilmiþ
	Otomobil otomobil2("Mavi", "BWM M5", 20);   

	otomobil1.ruhsatBilgileriGoster();  
	otomobil1.setOtomobilUretici("Mercedes");
	otomobil1.ruhsatBilgileriGoster();

	otomobil2.setOtomobilUretici("Trash Inc.");
	otomobil2.setOtomobilBeygirGucu(45);
	otomobil2.ruhsatBilgileriGoster();

	return 0;
}
