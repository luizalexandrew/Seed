#include <iostream>
#include <stdio.h>

using namespace std;

void Matrix(int tamanho){
		int matriz[tamanho][tamanho], distanciaUm = tamanho/3, aux = tamanho;
		
		for (int i = 0; i < tamanho; ++i){
			for (int j = 0; j < tamanho; ++j){				
				matriz[i][j] = 0;				
				
				if (aux-1 == j){
					matriz[i][j] = 3;
					aux -= 1;			
				}
				if (i==j){
					matriz[i][j] = 2;
					
				}
				if (i >= distanciaUm && i < tamanho - distanciaUm){				
					if (j >= distanciaUm && j < tamanho - distanciaUm){
						matriz[i][j] = 1;
					}
				}
				if (tamanho%2 !=0){
					matriz[tamanho/2][tamanho/2] = 4;
				}	
				cout << matriz[i][j];							
			}
			cout << endl;
		}
		cout << endl;
}

int main(){
	int tamanho;	
	cin >> tamanho;
	do{		
		Matrix(tamanho);
	}while(cin >> tamanho && tamanho != -1);
}
