#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n, in;
  	cin >> n;
  	for (int i = 0; i < n; i++) {
    	cin >> in;
    	cout << in%2 << endl;
  	}
  	return 0;
}
