#include <iostream>
using namespace std;
int main(){
	int Input;
	cout << "podaj liczbe (rzeczywista):";
	cin >> Input;
	if (Input% 2 == 0) cout << "liczba parzysta" << endl;
	else {
		cout << "liczba nieparzysta" << endl;
	}
	if (Input% 3 == 0) cout << "liczba jest podzielna przez 3" << endl;
	else {
		cout << "liczba NIE jest podzielna przez 3" << endl;
	}
}