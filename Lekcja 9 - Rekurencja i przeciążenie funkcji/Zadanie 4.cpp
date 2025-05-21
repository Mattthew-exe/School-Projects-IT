#include <iostream>
using namespace std;

int CalculateVolume(int a){
	int v;
	v = a * a * a;
	return v;
}
int CalculateVolume(int a, int b, int h){
	int v;
	v = a * b * h;
	return v;
}
int CalculateVolume(int r, int h){
	int v;
	float pi = 3.1415;
	v = pi * r * r * h;
	return v;
}
int DisplayResult(float v){
	cout << "Objetosc bryly wynosi: " << v;
}
int main(){
	int bryla;
	int a;
	int b;
	int h;
	float v;
	cout << "Wybierz bryle do obliczenia objetosci: " << endl << "1 - Szescian (V = a^3)" << endl << "2 - Prostopadloscian (V = a * b * h)" << endl << "3 - walec (V = pi * r^2 * h)" << endl << "Wybierz numer bryly: ";
	cin >> bryla;
	switch(bryla){
	case 1:
		cout << "Podaj dlugosc boku: ";
		cin >> a;
		v = CalculateVolume(a);
		DisplayResult(v);
		break;
	case 2:
		cout << "Podaj dlugosc: ";
		cin >> a;
		cout << "Podaj szerokosc: ";
		cin >> b;
		cout << "Podaj wysokosc: ";
		cin >> h;
		v = CalculateVolume(a, b, h);
		DisplayResult(v);
		break;
	case 3:
		cout << "Podaj promien: ";
		cin >> a;
		cout << "podaj wysokosc: ";
		cin >> h;
		v = CalculateVolume (a, h);
		DisplayResult(v);
		break;
	}
}