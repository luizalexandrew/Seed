#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	double a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	printf("TRIANGULO: %.3f\n", a*c/2);
	printf("CIRCULO: %.3f\n", 3.14159*(c*c));
	printf("TRAPEZIO: %.3f\n", (a+b)/2*c);
	printf("QUADRADO: %.3f\n", b*b);
	printf("RETANGULO: %.3f\n", a*b);
}
