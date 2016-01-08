#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int i, j, c;
    float s = 0.0, n;
    char o;
    cin >> c;
    cin >> o;
    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++) {
            cin >> n;
            if (j == c) s += n;
        }
    }
    if (o == 'S'){
    	printf("%.1f\n", s);
    }
    else{
    	printf("%.1f\n", s / 12);
    }
    return 0;
}
