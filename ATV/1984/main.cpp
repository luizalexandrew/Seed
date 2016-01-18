#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	string texto;
	cin >> texto;
	for (int i = texto.length() - 1; i >= 0; i--)
		cout << texto[i];
	cout << endl;
	return 0;
}
