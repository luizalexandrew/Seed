#include <iostream>
#include <stdio.h>

using namespace std;

int Tabuada(int n){
	for (int i = 1; i <= 10; i++)
        cout << i << " x " << n << " = " << i * n << endl;
}

int main(){
	int numero;
    cin >> numero;
    Tabuada(numero);
}
