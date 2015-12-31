#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int contPares = 0,contImpares = 0, contPositivo = 0, contNegativo = 0;
	int lista[5], soma = 0;
	for (int i = 0; i < 5; ++i){
		cin >> lista[i];
		if (lista[i] % 2 == 0){
			contPares++;
		}
		if (lista[i] % 2 != 0){
			contImpares++;
		}
		if (lista[i] > 0){
			contPositivo++;
		}
		if (lista[i] < 0){
			contNegativo++;
		}
	}
	cout << contPares << " valor(es) par(es)" << endl;
	cout << contImpares << " valor(es) impar(es)" << endl;
	cout << contPositivo << " valor(es) positivo(s)" << endl;
	cout << contNegativo << " valor(es) negativo(s)" << endl;
}
