#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int numero;
  	cin >> numero;
    for (int i = 1; i <= numero; i++){
        if (i % 2 == 0)
            printf("%d^2 = %d\n", i, i * i);
    }
    return 0;
}
