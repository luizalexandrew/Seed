#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){    
    int a;    
    cin >> a;    
    printf("VOLUME = %.3f\n", (4.0/3.0)*3.14159*pow(a,3));
    return 0;
}