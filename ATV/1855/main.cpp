#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int c, l, posx = 0, posy = 0, dir = 0;
  	cin >> c >> l;
  	string mapa[l];
  	for (int i = 0; i < l; i++)
    	cin >> mapa[i];
  	while (true) {
    	if (posx < 0 || posx == c || posy < 0 || posy == l) {
    		cout << "!" << endl;
      		return 0;
		}
    	switch (mapa[posy][posx]) {
      		case '.':
        		if (dir == 0) {
          			cout << "!" << endl;
          			return 0;
        		}
        		if (dir == 1)
          			posy--;
				if (dir == 2)
				  	posx++;
				if (dir == 3)
				  	posy++;
				if (dir == 4)
				  	posx--;
				break;
      		case '*':
        		cout << "*" << endl;
				return 0;
				break;
      		case '!':
				cout << "!" << endl;
				return 0;
				break;
		  	default:
				if (mapa[posy][posx] == '>') {
				  	mapa[posy][posx] = '!';
				  	posx++;
				  	dir = 2;
				} else if (mapa[posy][posx] == '^') {
				  	mapa[posy][posx] = '!';
				  	posy--;
				  	dir = 1;
				} else if (mapa[posy][posx] == 'v') {
				  	mapa[posy][posx] = '!';
				  	posy++;
				  	dir = 3;
				} else {
				  	mapa[posy][posx] = '!';
				  	posx--;
				  	dir = 4;
				}
				break;
		}
  	}
  	return 0;
}
