#include <iostream>
using namespace std;
int main() {
	int liczba;
	cout << "Podaj wynik w procentach:";
	cin >> liczba;
	if ((liczba >= 0) && ( liczba <= 49)) {
		cout << "ocena niedostateczna" << endl;
	} else if ((liczba >= 50) && (liczba <= 69)) {
		cout << "ocena dostateczna" << endl;
	} else if ((liczba >= 70) && (liczba <= 84)) {
		cout << "ocena dobra" << endl;
	} else if ((liczba >= 85) && (liczba <= 99)) {
		cout << "ocena bardzo dobra" << endl;
	} else if (liczba = 100) {
		cout << "ocena celujaca" << endl;
	} }
