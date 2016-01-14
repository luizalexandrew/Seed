#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	// I : 1, V : 5, X : 10, L : 50, C : 100, D : 500, M : 1000.
	int numero;
	string resultado = "";
	cin >> numero;
	struct romanDate_t { unsigned int valor; char const* numeral; };
    const struct romanDate_t romanDate[] = {
        {1000, "M"}, {900, "CM"},{500, "D"}, {400, "CD"},{100, "C"}, { 90, "XC"},{ 50, "L"}, { 40, "XL"},{ 10, "X"}, { 9, "IX"},{ 5, "V"}, { 4, "IV"},{ 1, "I"},{ 0, NULL}
    };

    for (const romanDate_t* current = romanDate; current->valor > 0; ++current) {
        while (numero >= current->valor) {
            resultado += current->numeral;
            numero -= current->valor;
        }
    }
	cout << resultado << endl;
	return 0;
}
