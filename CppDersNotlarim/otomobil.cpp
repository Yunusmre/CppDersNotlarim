#include "otomobil.h"


Otomobil::Otomobil(string _renk, string _model, int _beygirGucu) { // Otomobil Constructors (yap�c�)
	renk = _renk;
	model = _model;
	beygirGucu = _beygirGucu;
	uretici = "Volkswagen";
}

void Otomobil::ruhsatBilgileriGoster() {               // ruhsat bilgilerini g�ster ad�nda fonksiyon olu�turulmu�
	cout << "Model: " << Otomobil::model << endl;;     // �zellikler yazd�r�lm��
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir Gucu: " << Otomobil::beygirGucu << endl;
	cout << "Uretici Kurulus: " << Otomobil::uretici << endl << endl;
}

void Otomobil::setOtomobilUretici(string _uretici) {
	uretici = _uretici;
}
string Otomobil::getOtomobilUretici() {
	return uretici;
}


void Otomobil::setOtomobilRenk(string _renk) {
	renk = _renk;
}
string Otomobil::getOtomobilRenk() {
	return renk;
}

void Otomobil::setOtomobilModel(string _model) {
	renk = _model;
}
string Otomobil::getOtomobilModel() {
	return model;
}

void Otomobil::setOtomobilBeygirGucu(int _beygirGucu) {
	beygirGucu = _beygirGucu;
}
int Otomobil::getOtomobilBeygirGucu() {
	return beygirGucu;
}