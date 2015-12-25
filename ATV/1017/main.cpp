#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int tempo, velocidadeMedia;
	cin >> tempo;
	cin >> velocidadeMedia;
	printf("%.3f\n", tempo*velocidadeMedia/12.0);
}
