#include <iostream>
#include <stdio.h>

using namespace std;

void Funcao(int quantidade){
	int n;
	while(quantidade--){
        cin >> n;
        if (n == 0){
            printf("NULL\n");
            continue;
        }
        if (n % 2 == 0){
        	printf("EVEN ");
        }
        else{
            printf("ODD ");
        }
        if (n < 0){
            printf("NEGATIVE\n");
        }
        else{
            printf("POSITIVE\n");
        }
    }
}

int main(){
	int quantidade, n;
    cin >> quantidade;
    Funcao(quantidade);
}
