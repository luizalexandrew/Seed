#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int i, j, x, z, s;
     while (cin >> i >> j && i > 0 && j > 0) {
        s = 0;
        if (j < i){
            x = i; i = j; j = x;
        }
        for (z = i; z <= j; z++){
            printf("%d ", z);
            s += z;
        }
        printf("Sum=%d\n", s);
    }
    return 0;
}
