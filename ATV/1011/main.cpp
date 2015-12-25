#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int raio;
	cin >> raio;
	double resultado = ((4.0/3)*3.14159)*(raio*raio*raio);
	printf("VOLUME = %.3f\n", resultado);
}
