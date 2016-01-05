#include <iostream>
#include <stdio.h>

using namespace std;

int SomaEntreImpares(int menor, int maior){
	int resultado = 0;
	if (menor > maior){
		SomaEntreImpares(maior, menor);		
	}else{
		for (int i = menor+1; i < maior; ++i){
			if (i%2 != 0){
				resultado = resultado + i;
			}
		}
		cout << resultado << endl;	
	}
}

int main(){
	int n,x,y;
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; ++i){
		cin >> x >> y;
		SomaEntreImpares(x,y);
	}
}
