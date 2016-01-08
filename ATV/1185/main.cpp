#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    int i, j, x = 11;
    float s = 0, n;
    char o;
    cin >> o;
    for (i = 0; i <= 11; i++){
        for (j = 0; j <= 11; j++){
            cin >> n;
            if (x < j)
                s += n;
        }
        x--;
    }
    if (o == 'S')
        printf("%.1f\n", s);
    else
        printf("%.1f\n", s / 66);
    return 0;
}
