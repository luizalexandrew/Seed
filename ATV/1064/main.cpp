#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int cont = 0;
	float lista[6], soma = 0;
	for (int i = 0; i < 6; ++i){
		cin >> lista[i];
		if (lista[i] > 0){
			cont++;
			soma += lista[i];
		}
	}
	cout << cont << " valores positivos" << endl;
	printf("%.1f\n", soma/cont);
}
