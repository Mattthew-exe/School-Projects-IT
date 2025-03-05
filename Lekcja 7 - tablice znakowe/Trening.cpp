#include <iostream>
#include <string>
using namespace std;

int main() {
	string text; //tworzy nowy string o tytule 'text'
	cout << "Podaj pelny text: ";
	getline(cin, text); //getline zbiera znaki z naszegu inputu 'cin' i wszadza te informacje do text'u.
	cout << "wprowadzono text: " << text << endl; //cout wyœwietla string
	return 0; //koñczy dzia³anie funkcji, czyli zwraca jej wartoœæi do zera.
}