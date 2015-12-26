#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	double a,b,c,delta,x1,x2;
	cin >> a;
	cin >> b;
	cin >> c;
	delta = b * b - 4 * a * c;
	if (a != 0 && delta > 0){
		x1 = (-1*b + sqrt(delta))/(2*a);
		x2 = (-1*b - sqrt(delta))/(2*a);
		printf("R1 = %.5f\n", x1);
		printf("R2 = %.5f\n", x2);
	}else{
		cout << "Impossivel calcular" << endl;
	}
}
