#include <iostream>
#include "otomobil.h"

// Visual studio c++ ders 26
using namespace std;

int main() {
	Otomobil otomobil1, otomobil2;

	otomobil1.renk = "Siyah";
	otomobil1.beygirGucu = 150;
	otomobil1.model = "Mercedes Benz E 200 d";


	otomobil2.renk = "Mavi";
	otomobil2.beygirGucu = 80;
	otomobil2.model = "BWM M5";

	otomobil1.ruhsatBilgileriGoster();
	otomobil2.ruhsatBilgileriGoster();

	return 0;
}
