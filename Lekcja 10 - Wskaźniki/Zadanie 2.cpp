#include <iostream>
using namespace std;
void FindMinMax(float *marktablica){
	float max = marktablica[0];
	for(int i = 0; i < 9; i++){
		if(marktablica[i] > max){
			max = marktablica[i];
		}
	}
	cout << "Najwieksza liczba: " << max << endl;
	float min = marktablica[9];
	for(int i = 9; i > 0; i--){
		if(min > marktablica[i]){
			min = marktablica[i];
		}
	}
	cout << "Najmniejsza liczba: " << min << endl;
}

int main(){
	float tablica[10] = {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};
	cout << "tablica: ";
	for(int i = 0; i < 9; i ++){
		cout << tablica[i] << " ";
	}
	cout << endl;
	FindMinMax(tablica);
	return 0;
}