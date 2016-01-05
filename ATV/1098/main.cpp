#include <iostream>
#include <stdio.h>

using namespace std;

int main(){	
	float i,j,a = 0; 
	for (i = 0; i <= 2.2; i+=0.2){		
		for (j = 1; j <= 3; j++){
			cout << "I=" << i << " J=" << j+a << endl;
		}
		a+=0.2;
	}
}
