#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a, b;
    while(cin >> a >> b && a != b){
    	if (a < b){
            printf("Crescente\n");
    	}
        else{
            printf("Decrescente\n");
        }
    }
}
