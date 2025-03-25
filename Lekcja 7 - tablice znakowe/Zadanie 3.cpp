#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string s1;
	char znak;
	int licznik;
	cout << "Podaj ciag znakow: ";
	getline(cin, s1);	
	cout << "Podaj znak do zliczenia: ";
	cin >> znak;
	for(int i = 0; i < s1.length(); i++)
		if(s1[i] == znak){
		licznik += 1;
	}
	cout << "liczba wystapien znaku " << znak << ": " << licznik << endl;
	cout << "Pozycje wystapien: ";
	for(int i = 0; i < s1.length(); i++)
		if(s1[i] == znak){
			cout << i << " ";
		}
	return 1;
		
		
}