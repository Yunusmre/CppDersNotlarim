#pragma once
#include <iostream>

using namespace std;

class Otomobil {   // otomobil ad�nda class olu�turuldu (object)
private: // Eri�im Belirleyicisi private sadece kendi dosyas�ndan eri�ilebilir (otomobil.h ve otomobil.cpp)
	string uretici; // Object �zelli�i belirlenmi�
	string renk;  
	string model;
	int beygirGucu;


public:    // Eri�im Belirleyicisi Public her yerden eri�ilebilir
	//  Constructor
	Otomobil(string _renk, string _model, int _beygirGucu, int kp); // Constructors (S�n�flar�n Yap�c� Metodlar�) Olu�turuldu (ana kodlar� otomobil.cpp dosyas�nda)

	//  Destructor
	~Otomobil();

	void ruhsatBilgileriGoster();  //Foknsiyon tan�mlanm�� (ana kodlar� otomobil.cpp dosyas�nda)

	void setOtomobilUretici(string _uretici);
	string getOtomobilUretici();

	void setOtomobilRenk(string _renk);
	string getOtomobilRenk();

	void setOtomobilModel(string _model);
	string getOtomobilModel();

	void setOtomobilBeygirGucu(int _beygirGucu);
	int getOtomobilBeygirGucu();

	int* pKapiSayisi;
};

