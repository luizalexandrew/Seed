#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int cont = 0;
	int lista[5], soma = 0;
	for (int i = 0; i < 5; ++i){
		cin >> lista[i];
		if (lista[i] % 2 == 0){
			cont++;
		}
	}
	cout << cont << " valores pares" << endl;
}
