#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int hinicial, minicial, hfinal, mfinal, mregular, hregular;
    cin >> hinicial >> minicial >> hfinal >> mfinal;
    hregular = hfinal - hinicial;
    if (hfinal - hinicial < 0)
        hregular = 24 + hfinal - hinicial;
    mregular = mfinal - minicial;
    if (mfinal - minicial < 0){
        mregular = 60 + mfinal - minicial;
        hregular--;
    }
    if (hfinal == hinicial && mfinal == minicial)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hregular, mregular);
    return 0;
}
