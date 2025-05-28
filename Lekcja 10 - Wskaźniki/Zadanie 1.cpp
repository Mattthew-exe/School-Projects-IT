#include <iostream>
using namespace std;

void ModifyVariables(int *MarkdownA, int *MarkdownB){
	*MarkdownA = *MarkdownA + 10;
	*MarkdownB = *MarkdownB + 10;
}

int main(){
	int a;
	int b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Liczby Przed Modyfikacja:" << endl << a << endl << b << endl;
	ModifyVariables(&a, &b);
	cout << "Liczby Po Modyfikacji: " << endl << a << endl << b;
	return 0;
}