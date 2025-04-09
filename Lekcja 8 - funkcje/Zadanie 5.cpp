#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
bool CheckInput(int l, int wylosowanaliczba){
	if(l != wylosowanaliczba){
		return false;
	}
	else if(l = wylosowanaliczba){
		cout << "Gratulacje! odgadles liczbe!";
	}
}
  int DuzaMala(int l, int wylosowanaliczba){
  	 if(l < wylosowanaliczba){
  	 	cout << "Za malo" << endl;
	   }
	   else if(l > wylosowanaliczba)
	   cout << "Za duzo" << endl;
}
 int main(){
 	 int l;
 	 srand(time(NULL));
 	 int wylosowanaliczba = (rand() % 99) + 1;
	   do{
	   cout << "Podaj liczbe: ";
	   cin >> l;
	   if(l != wylosowanaliczba){
	   	 	CheckInput(l, wylosowanaliczba);
			DuzaMala(l, wylosowanaliczba);
	   }
	}
	while(CheckInput(l, wylosowanaliczba) == false);
}