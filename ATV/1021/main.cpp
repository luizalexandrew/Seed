#include <iostream>
#include <stdio.h>

using namespace std;

float Contador(float valor, float nota){
	int quantidade = 0;
	while(valor >= nota){
		valor = valor - nota;
		quantidade++;
	}
	if (quantidade > 0){
		printf("%d nota/moeda(s) de R$ %.2f\n", quantidade, nota);
	}
	return valor;
}

int main(){
	float valor, moeda[] = {100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01};
	cin >> valor;
	if (valor > 0 && valor < 1000000){
		cout << valor << endl;
		for (int i = 0; valor > 0; i++){
			valor = Contador(valor, moeda[i]);
		}
	}	
}