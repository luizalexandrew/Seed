#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	int a, b, q, r;
    cin >> a >> b;
    q = (int)a/b;
    r = a%b;
    if (r < 0) {
        r += abs(b);
        if (b > 0)
            q--;
        else
            q++;
    }
    cout << q << " " << r << endl;
    return 0;
}
