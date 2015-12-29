#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int inicial, final, horas;
    cin >> inicial;
    cin >> final;
    horas = final - inicial;
    if (final - inicial < 0)
        horas = 24 + final - inicial;
    if (final == inicial)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S)\n", horas);
    return 0;	
}
