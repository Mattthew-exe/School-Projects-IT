#include <iostream>
using namespace std;
int main(){
	int czas;
	char pojazd;
	int koszt;
	cout << "podaj czas (w godzinach): ";
	cin >> czas;
	cout << "podaj jakim pojazdem parkujesz(S-samochod, B-autobus, M-motocykl): ";
	cin >> pojazd;
	switch(pojazd){
		case 'S':
			koszt = czas * 5;
			cout << "zaplacisz " << koszt << " zloty(ch) za parkowanie";
			break;
		case 'M':
			koszt = czas * 3;
			cout << "zaplacisz " << koszt << " zloty(ch) za parkowanie";
			break;
		case 'B':
			koszt = czas * 10;
			cout << "zaplacisz " << koszt << " zloty(ch) za parkowanie";
		default:
			cout << "zly znak, wybierz S-samochod, B-autobus, M-motocykl";
			break;
	}
}
