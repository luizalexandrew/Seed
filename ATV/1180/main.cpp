#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int c, n, m, posicao = 0, i = 0;
    cin >> c;
    cin >> n;
    m = n;
    while(c--){
        i++;
        cin >> n;
        if (n < m){
            posicao = i;
            m = n;
        }
    }
    printf("Menor valor: %d\n", m);
    printf("Posicao: %d\n", posicao);
    return 0;
}
