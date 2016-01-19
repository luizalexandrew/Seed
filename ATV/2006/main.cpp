#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int t, num, acc = 0;
	cin >> t;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num == t)
			acc++;
	}
	cout << acc << endl;
	return 0;
}
