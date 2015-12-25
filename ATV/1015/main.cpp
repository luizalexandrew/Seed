#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	float x1, x2, y1, y2, distancia;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	printf("%.4f\n", sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}
