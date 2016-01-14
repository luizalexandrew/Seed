#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	int p, n, c, cl = -1;
	string result = "YOU WIN";

	cin >> p >> n;
	while (n--) {
		cin >> c;
		if (cl != -1 && abs(c - cl) > p) {
			result = "GAME OVER";
		}
		cl = c;
	}
	cout << result << endl;
	return 0;
}
