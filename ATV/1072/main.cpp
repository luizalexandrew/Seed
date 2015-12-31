#include <iostream>
#include <stdio.h>

using namespace std;

void Intervalo(int c1){
	int n2, input = 0, output = 0;
	while (c1--){
        cin >> n2;
        if (n2 > 9 && n2 < 21)
            input++;
        else
            output++;
    }
    cout << input << " in" << endl;
    cout << output << " out" << endl;
}

int main(){
	int c1;
    cin >> c1;
    Intervalo(c1);
    return 0;
}
