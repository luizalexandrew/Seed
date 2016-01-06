#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float soma = 0;
    for(int i = 1; i <= 100; i++){
        soma += 1/(float)i;
    }
    printf("%.2f\n",soma);
    return 0;
}
