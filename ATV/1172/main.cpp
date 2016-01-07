#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n, i;
    for (n = 0; n <= 9; n++){
        cin >> i;
        if (i > 0)
            printf("X[%d] = %d\n", n, i);
        else
            printf("X[%d] = 1\n", n);
    }
    return 0;
}
