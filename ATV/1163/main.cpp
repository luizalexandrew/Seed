#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	double x, y;
	cin >> x >> y;
	printf("%.2lf%%\n", ((y * 100.00) / x) - 100.00);
	return 0;
}
