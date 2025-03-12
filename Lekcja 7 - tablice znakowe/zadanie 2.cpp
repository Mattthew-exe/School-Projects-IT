#include <iostream>
#include <string>
using namespace std;
int main(){
		char text[21];
		cout << "podaj ciag znakow(max. 20): ";
		cin.getline(text, 20); 	
		for(int i = 0; i < 20; i++){
			if(text[i] == 'a'){
				text[i] = 'o';
			}
		}
		cout << "zmodyfikowany ciag znakow: " << text;
		return 1;
}