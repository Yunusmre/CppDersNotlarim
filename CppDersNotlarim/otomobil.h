#pragma once
#include <iostream>

using namespace std;

class Otomobil {   // otomobil adýnda class oluþturuldu (object)
private: // Eriþim Belirleyicisi private sadece kendi dosyasýndan eriþilebilir (otomobil.h ve otomobil.cpp)
	string uretici;
	string renk;   // Object özelliði belirlenmiþ
	string model;
	int beygirGucu;


public:            // Eriþim Belirleyicisi Public her yerden eriþilebilir
	
	void ruhsatBilgileriGoster();  //Foknsiyon tanýmlanmýþ (ana kodlarý otomobil.cpp dosyasýnda)
	Otomobil(string _renk, string _model, int _beygirGucu); // Constructors (Sýnýflarýn Yapýcý Metodlarý) Oluþturuldu (ana kodlarý otomobil.cpp dosyasýnda)


	void setOtomobilUretici(string _uretici);
	string getOtomobilUretici();

	void setOtomobilRenk(string _renk);
	string getOtomobilRenk();

	void setOtomobilModel(string _model);
	string getOtomobilModel();

	void setOtomobilBeygirGucu(int _beygirGucu);
	int getOtomobilBeygirGucu();

};

