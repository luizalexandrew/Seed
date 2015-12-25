#include <iostream>
#include <stdio.h>

using namespace std;

int Contador(int valor, int nota){
	int quantidade = 0;
	while(valor >= nota){
		valor -= nota;
		quantidade++;
	}
	printf("%d nota(s) de R$ %d,00\n", quantidade, nota);
	return valor;
}

int main(){
	int valor, moeda[] = {100,50,20,10,5,2,1};
	cin >> valor;
	if (valor > 0 && valor < 1000000){
		cout << valor << endl;
		for (int i = 0; valor > 0; i++){
			valor = Contador(valor, moeda[i]);
		}
	}
	else{
		return 0;
	}
}