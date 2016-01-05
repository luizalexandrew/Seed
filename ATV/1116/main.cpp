#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float x, y;
    int n;
    cin >> n;
    while(n--){
        cin >> x >> y;
        if (y == 0.0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", x / y);
    }
    return 0;
}
