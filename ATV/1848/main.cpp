#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	string in;
  	int count=0, res[3], sum=0;
  	while (count != 3){
    	cin >> in;
    	if (in == "caw"){
      		cin >> in;
      		res[count++] = sum;
      		sum = 0;
    	}else {
      		if (in[0] == '*'){
      			sum += 4;
      		}
      		if (in[1] == '*'){
      			sum += 2;
      		}
      		if (in[2] == '*'){
      			sum += 1;
      		}
    	}
  	}
  	cout << res[0] << endl << res[1] << endl << res[2] << endl;
  	return 0;
}
