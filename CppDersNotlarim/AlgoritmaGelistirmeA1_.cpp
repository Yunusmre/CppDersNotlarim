#include <iostream>

// c++ Visual studio Ders 1

using namespace std;
int main1() { 

	string isim = "Yunus Emre"; // string çift týrnak ile char ise tek týrnak ile yazýlýr 
	int yas = 18;
	char notOrtalamasi = 'A'; //char tek karakter tutar 1 byte yer kaplar; ASCII Table ile de yazýlabilir 65(deciminal) sayisi A anlamýna gelir
	float sayisalNotOrtalamasi = 3.25;
	double sayisalNotOrtalamasi1 = 3.251412; //	Floata göre daha detaylý ondalýk tutar
	bool sinavaGirdimi = true; // True veya false deðrini tutar, 1 bit yer kaplar
	void; //deðer döndürmez
	
	cout << "Merhaba " << endl << endl << "Ogrenci Adi Soyadi: " << isim << endl; // endl Satýr sonu yapar ve alt satýra geçer
	cout << "Ogrenci yasi: " << yas << endl;
	cout << "Not Ortalamasi: " << notOrtalamasi << endl;
	cout << "Ogrenci sayisal Not Ortalamasi: " << sayisalNotOrtalamasi << endl;
	cout << "Ogrenci Sinava Girdimi: " << sinavaGirdimi << endl;
	cout << endl;
	return 0;
}