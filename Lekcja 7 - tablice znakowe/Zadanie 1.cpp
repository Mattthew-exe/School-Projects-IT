#include <iostream>
using namespace std;
int main(){
		char tekst[21];
		cout << "Podaj text (max. 20 znakow): ";
		cin.getline(tekst, 20);
		cout << "wprowadzono tekst: " << tekst << endl;
}