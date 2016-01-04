#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float quantExperimento, coelho, rato, sapo, quantUsados;
	char tipoAnimal;
	cin >> quantExperimento;
	for (int i = 0; i < quantExperimento; ++i){
		cin >> quantUsados >> tipoAnimal;
		switch (tipoAnimal){
			case 'C':
				coelho +=quantUsados;
				break;
			case 'R':
				rato +=quantUsados;
				break;
			case 'S':
				sapo +=quantUsados;
				break;
		}
	}
	quantUsados = coelho+rato+sapo;
	cout << "Total: " << quantUsados << " cobaias" << endl;
	cout << "Total de coelhos: " << coelho << endl;
	cout << "Total de ratos: " << rato << endl;
	cout << "Total de sapos: " << sapo << endl;
	printf("Percentual de coelhos: %.2f %%\n", (coelho*100)/quantUsados);
	printf("Percentual de ratos: %.2f %%\n", (rato*100)/quantUsados);
	printf("Percentual de sapos: %.2f %%\n", (sapo*100)/quantUsados);
}
