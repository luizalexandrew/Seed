#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int x, n, s;
    cin >> x;
    while(x--){
        cin >> n;
        s = 0;
        for (int i = 1; i <= n / 2; i++){
            if (n % i == 0){
                s += i;
            }
        }
        if (s == n)
            printf("%d eh perfeito\n", n);
        else
            printf("%d nao eh perfeito\n", n);
    }
    return 0;
}
