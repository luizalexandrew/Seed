#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	char o;
    int i, j;
    float s, n;
   	cin >> o;
    for (i = 0; i <= 11; i++){
        for (j = 0; j <= 11; j++){
            cin >> n;
            if (j < i)
                s += n;
        }
    }
    if (o == 'S'){
        printf("%.1f\n", s);
    }
    else{
        printf("%.1f\n", s / 66);
    }
    return 0;
}
