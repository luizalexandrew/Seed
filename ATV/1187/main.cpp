#include <iostream>
#include <stdio.h>

using namespace std;

int main(){	
    int i, j, l = 1;
    double s = 0, n;
    char o;
    cin >> o;
    for (i = 0; i <= 4; i++){
        for (j = 0; j <= 11; j++){
            cin >> n;
            if (j >= l && j <= 11 - l)
                s += n;
        }
        l++;
    }
    if (o == 'S'){
        printf("%.1f\n", s);
    }
    else{
        printf("%.1f\n", s / 30);
    }
    return 0;
}
