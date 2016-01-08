#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n, r1, r2;
    cin >> n;
    while (n--) {
        cin >> r1 >> r2;
        printf("%d\n", r1 + r2);
    }
    return 0;
}
