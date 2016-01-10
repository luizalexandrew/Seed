#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n, t,val, idx=-1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (idx == -1 || t < val) {
	  		idx = i+1;
	  		val = t;
		}
	}
	cout << idx << endl;
	return 0;
}
