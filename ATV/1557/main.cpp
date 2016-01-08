#include <iostream>
#include <stdio.h>
#include <cmath>
#include <sstream>

using namespace std;

int main(){
	int i, j, k, n, inicial, corrent, numeroMaximo, tamanhoNumeroMaximo, tamanhoCorrent, numSpace;
    while (cin >> n && n){
        inicial = 1;
        numeroMaximo = pow(2, n + n - 2);
        stringstream out;
        out << numeroMaximo;
        tamanhoNumeroMaximo = out.str().length();
        for (i = 0; i < n; i++){
            corrent = inicial;
            for (j = 0; j < n; j++){
                numSpace = tamanhoNumeroMaximo;
                if (j < 1) numSpace--;
                stringstream out;
                out << corrent;
                tamanhoCorrent = out.str().length();
                numSpace -= tamanhoCorrent;
                numSpace++;
                for (k = 0; k < numSpace; k++) cout << " ";
                cout << corrent;
                corrent *= 2;
            }
            cout << endl;
            inicial *= 2;
        }
        cout << endl;
    }
    return 0;
}