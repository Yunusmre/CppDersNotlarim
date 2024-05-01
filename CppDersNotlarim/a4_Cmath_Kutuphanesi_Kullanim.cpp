#include <iostream>
#include <cmath> //Visual Stuido, iostream Kütüphanesi içine, cmath kütüphanesini eklemiþtir.

// Visual studio c++ ders 4

using namespace std; 

int main4() {

	int y;
	y = pow(2, 3); //pow yani üssü alma için kullanýlýr

	cout << "2^5 Isleminin Sonucu: " << y << endl;

	//

	y = floor(2.1); //Ondalýklý sayýyý en düþük sayýya yuvarlar 2.1'i 2 ye yuvarlar

	cout << "2.1 Floor Isleminin Sonucu: " << y << endl;

	//

	y = ceil(2.1); //Ondalýklý sayýyý en yüksek sayýya yuvarlar 2.1'i 3 ye yuvarlar

	cout << "2.1 ceil Isleminin Sonucu: " << y << endl;

	//

	y = round(2.1); //Ondalýklý sayýyý yuvarlar 2.1'i 2 ye yuvarlar

	cout << "2.1 round Isleminin Sonucu: " << y << endl;

	return 0;
}