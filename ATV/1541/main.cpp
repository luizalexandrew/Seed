#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

	int a, b, c;
	double mini;
    while (cin >> a && a){
        cin >> b >> c;
        mini = (100 * a * b) / c;
        cout << floor(sqrt(mini)) << endl;
    }
    return 0;
}
