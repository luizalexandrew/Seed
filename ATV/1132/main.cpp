#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int d, t, i, s = 0;
    cin >> d >> t;
    if (d < t){
        for (i = d; i <= t; i++){
            if (i % 13 != 0)
                s += i;
        }
    }else {
        for (i = t; i <= d; i++){
            if (i % 13 != 0)
                s += i;
        }
    }
    cout << s << endl;
}
