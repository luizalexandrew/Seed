#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	string age;
	long n, num;
	cin >> n;
	while (n--) {
		cin >> num;
		num = 2015 - num;
		num -= num <= 0 ? 1 : 0;
		age = (num < 0) ? "A.C." : "D.C.";
		cout << abs(num) << " " << age << endl;
	}
	return 0;
}
