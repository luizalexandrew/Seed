#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main(){
	double n;
	cin >> n;
	if (n > 0){
		printf("+%.4E\n",n);
	}else if(n<0){
		printf("%.4E\n",n);
	}else{
		cout << "+0.0000E+00" << endl;
	}
}


