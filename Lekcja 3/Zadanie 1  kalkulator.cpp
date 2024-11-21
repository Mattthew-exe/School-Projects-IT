#include <iostream>
using namespace std;
int main(){
	int liczbA;
	int liczBa;
	char znak;
	int wynik;
	cout << "podaj pierwsza liczbe: ";
	cin >> liczbA;
	cout << "podaj druga liczbe: ";
	cin >> liczBa;
	cout << "podaj znak dzialania (+, -, *, /): ";
	cin >> znak;
	switch(znak){
		case '+':
			wynik = liczbA + liczBa;
			cout << liczbA << "+" << liczBa << "=" << wynik;
			break;
		case '-':
			wynik = liczbA - liczBa;
			cout << liczbA << "-" << liczBa << "=" << wynik;
			break;	
		case '*':
			wynik = liczbA * liczBa;
			cout << liczbA << "*" << liczBa << "=" << wynik;
			break;
		case '/':
			if (liczBa == 0){
			cout << "nie da sie dzielic przez 0";
			break;
		}
			else
		    wynik = liczbA / liczBa;
			cout << liczbA << "/" << liczBa << "=" << wynik;
			break;
		default:
			cout << "Nieprawidlowy znak";
			break;
	}
}