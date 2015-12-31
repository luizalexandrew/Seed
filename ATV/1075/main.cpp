#include <iostream>
#include <stdio.h>

using namespace std;

void RestoDois(int numero){
	 for (int i = 1; i <= 10000; i++){
        if (i % numero == 2)
            cout << i << endl;
    }
}

int main(){
	int numero;
    cin >> numero;
    RestoDois(numero);
}
