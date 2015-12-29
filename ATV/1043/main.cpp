#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	float a,b,c, perimetro, area;
	cin >> a;
	cin >> b;
	cin >> c;    
    if(a+b>c && b+c>a && a+c>b ){
    	perimetro=a+b+c;
    	printf("Perimetro = %.1f\n",perimetro);
	}else{
	    area=.5*(a+b)*c;
	    printf("Area = %.1f\n",area);
	}    
    return 0;
}
