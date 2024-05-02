#include <iostream>
#include "otomobil.h"

// Visual studio c++ ders 26
using namespace std;

int mainold() {
	Otomobil otomobil1("Siyah", "Mercedes Benz E 200 d", 150,5);       //objele oluþturulmuþ ve özellikleri verilmiþ
	Otomobil otomobil2("Mavi", "BWM M5", 20,5);   

	//Not 1
	cout << "----------------- Not 1 -----------------" << endl;
	otomobil1.ruhsatBilgileriGoster();  
	otomobil1.setOtomobilUretici("Mercedes");
	otomobil1.ruhsatBilgileriGoster();

	otomobil2.setOtomobilUretici("Trash Inc.");
	otomobil2.setOtomobilBeygirGucu(45);
	otomobil2.ruhsatBilgileriGoster();

	cout << endl;

	//Not 2 (pointer)
	cout << "----------------- Not 2 -----------------" << endl;
	Otomobil* p;

	p = &otomobil1;
	p->ruhsatBilgileriGoster();

	p = &otomobil2;
	p->ruhsatBilgileriGoster();

	cout << endl << endl;

	//Not 3 (pointer 2)
	cout << "----------------- Not 3 -----------------" << endl;
	p = new Otomobil("Pembe", "Mini Cooper", 60, 5);
	p->setOtomobilRenk("Beyaz");
	p->ruhsatBilgileriGoster();
	delete p;  // Pointer'lar ile olusturulan siniflari mutlaka isiniz bittiginde delete edin!

	return 0;
}
