#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int g, i, gv = 0, iv = 0, e = 0, n = 0, r;
    do {
        cin >> i >> g;
        n++;
        if (i == g){
            e++;
        }
        if (i > g){
            iv++;
        }
        else{
            gv++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
    } while (scanf("%d", &r) && r == 1);
    printf("%d grenais\n", n);
    printf("Inter:%d\n", iv);
    printf("Gremio:%d\n", gv);
    printf("Empates:%d\n", e);
    if (iv > gv){
        cout << "Inter venceu mais" << endl;
    }
    else if (gv > iv){
        cout << "Gremio venceu mais" << endl;
    }
    else{
    	cout << "Nao houve vencedor" << endl;
    }
    return 0;
}
