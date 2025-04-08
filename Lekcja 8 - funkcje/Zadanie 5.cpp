#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
  int DuzaMala(int l, int wylosowanaliczba){
  	 if(l < wylosowanaliczba){
  	 	cout << "Za malo";
	   }
	   else if(l > wylosowanaliczba)
	   cout << "Za duzo";
  }
 int main(){
 	 int l;
 	 srand(time(NULL));
 	 int wylosowanaliczba = (rand() % 99) + 1;
	   //do
	   cout << "Podaj liczbe: ";
	   cin >> l;
}