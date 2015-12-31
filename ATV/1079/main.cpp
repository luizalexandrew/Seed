#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int numero;
    float a, b, c;
    cin >> numero;
    while (numero--){
        cin >> a >> b >> c;
        printf("%.1f\n", (a * 2.0 + b * 3.0 + c * 5.0) / 10.0);
    }    
}
