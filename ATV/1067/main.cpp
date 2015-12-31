#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int numero;
	cin >> numero;
	if (numero >= 1 && numero <= 1000){
		for (int i = 1; i <= numero; i += 2){
			cout << i << endl;
		}
	}
}
