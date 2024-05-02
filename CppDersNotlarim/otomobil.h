#pragma once
#include <iostream>

using namespace std;

class Otomobil {   // otomobil adýnda class oluþturuldu (object)
private: // Eriþim Belirleyicisi private sadece kendi dosyasýndan eriþilebilir (otomobil.h ve otomobil.cpp)
	string uretici; // Object özelliði belirlenmiþ
	string renk;  
	string model;
	int beygirGucu;


public:    // Eriþim Belirleyicisi Public her yerden eriþilebilir
	//  Constructor
	Otomobil(string _renk, string _model, int _beygirGucu, int kp); // Constructors (Sýnýflarýn Yapýcý Metodlarý) Oluþturuldu (ana kodlarý otomobil.cpp dosyasýnda)

	//  Destructor
	~Otomobil();

	void ruhsatBilgileriGoster();  //Foknsiyon tanýmlanmýþ (ana kodlarý otomobil.cpp dosyasýnda)

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

