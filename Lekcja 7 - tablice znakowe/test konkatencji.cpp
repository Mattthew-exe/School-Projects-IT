#include <iostream>
#include <cstring> //dodaje opcje do u¿ycia ci¹gu znaków
using namespace std;
int main(){
	string text1 = "C";
	char text2[] = "string";
	string s = text1 + '-' + text2;
	cout << s << endl;
}