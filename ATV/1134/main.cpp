#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int n, v[] = {0, 0, 0};
    while (cin >> n && n != 4){
        if (n >= 1 && n <= 3){
            v[n - 1]++;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    printf("Alcool: %d\n", v[0]);
    printf("Gasolina: %d\n", v[1]);
    printf("Diesel: %d\n", v[2]);
    return 0;
}
