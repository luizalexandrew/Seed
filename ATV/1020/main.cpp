#include <iostream>
#include <stdio.h>

using namespace std;

float Contador(float segundos, float tempo){
	int quantidade = 0;
	while(segundos >= tempo){
		segundos = segundos - tempo;
		quantidade++;
	}
	if (quantidade > 0){
		cout << quantidade << " ";
	}
	return segundos;
}

int main(){
	int segundos, tempo[] = {365,30,1};
	cin >> segundos;
	for (int i = 0; segundos > 0; i++){
		segundos = Contador(segundos,tempo[i]);
	}
	cout << endl;
}
