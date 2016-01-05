#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float n, s = 0.0;
    int c = 0;
    while(c < 2){
        cin >> n;
        if (n >= 0.0 && n <= 10.0){
        	s += n;
            c++;            
        } else {
        	cout << "nota invalida" << endl;
        }
    }
    printf("media = %.2f\n", s / 2.0);
    return 0;
}
