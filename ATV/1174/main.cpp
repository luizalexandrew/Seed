#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int  i;
	float a[100];
	for (int i = 0; i < 100; ++i){
		cin >> a[i];
	}
	for (int i = 0; i < 100; ++i){
		if (a[i] <= 10){
			printf("A[%d] = %.1f\n",i,a[i]);
		}
	}
}
