#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a, b, c, g, m, s, x;

    scanf("%d %d %d", &a, &b, &c);

    g = a; m = b; s = c;

    if (g < m){
        x = g; g = m; m = x;
    }
    if (m < s){
        x = m; m = s; s = x;
    }
    if (g < m){
        x = g; g = m; m = x;
    }
    cout << s << endl;
    cout << m << endl;
    cout << g << endl << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}