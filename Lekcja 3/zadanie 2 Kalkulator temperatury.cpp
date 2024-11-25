#include <iostream>
using namespace std;
int main(){
	float celsjusz;
	char znak;
	float temperatura;
	cout << "podaj temperature w stopniach celsjusza: ";
	cin >> celsjusz;
	cout << "podaj odpowiedna jednostke (K-Kelvin, F-farrenheit): ";
	cin >> znak;
	switch(znak){
		case 'K':
			temperatura = celsjusz + 273.15;
			cout << "temperatura w Kelvinach: " << temperatura;
			break;
		case 'F':
			temperatura = (celsjusz * 9/5) + 32;
			cout << "temperatura w stopniach farrenheita: " << temperatura;
			break;
			
	}
}