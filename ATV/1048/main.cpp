#include <iostream>
#include <stdio.h>

using namespace std;

void ImprimirCalculoReajuste(float salario, float valorReajuste, int porReajuste){
	printf("Novo salario: %.2f\n", salario + valorReajuste);
	printf("Reajuste ganho: %.2f\n", valorReajuste );
	printf("Em percentual: %d %%\n", porReajuste);
}

void CalculoReajuste(float salario, int porReajuste){
	int valorReajuste = (salario * porReajuste) / 100;
	ImprimirCalculoReajuste(salario,valorReajuste,porReajuste);
}

void Reajuste(float salario){
	if (salario >= 0 && salario <= 400){
		CalculoReajuste(salario,15);
	}else if (salario >= 400.01 && salario <= 800){
		CalculoReajuste(salario,12);
	}else if (salario >= 800.01 && salario <= 1200){
		CalculoReajuste(salario,10);
	}else if (salario >= 1200.01 && salario <= 2000){
		CalculoReajuste(salario,7);
	}else if (salario > 2000){
		CalculoReajuste(salario,4);
	}
}

int main(){

	float salario;
	cin >> salario;
	Reajuste(salario);
}
