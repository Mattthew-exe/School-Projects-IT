#include <iostream>
#include <cstring>
using namespace std;
		string GetTextFromUser(){
			string text;
			string reversed;
			getline(cin, text);
			return text;
		}
			string ReverseString(string text){
				string reversed;
				int rozmiar = text.length();
	 				for(int i = rozmiar - 1; i >= 0; i--){
					cout << text[i];
					}
			}
int main(){
	string text;
	cout << "podaj ciag znakow: ";
	text = GetTextFromUser();
	text = ReverseString(text);

}