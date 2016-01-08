#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int n, i;
    cin >> n;
    for (i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, n);
        n *= 2;
    }
    return 0;
}
