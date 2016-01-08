#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a, p = 0, i = 0, r, par[5], impar[5];
    for(int j = 0; j < 15; j++){
            cin >> a;
            if(a%2 == 0){
                    par[p] = a;
                    p++;
            }else{
                  impar[i] = a;
                  i++;
            }            
            if(p == 5){
                 r = 0;
                 while(r != 5){ cout << "par[" << r << "] = " << par[r] << "\n"; r++;}
                 p = 0;
            }
            if(i == 5){
                 r = 0;
                 while(r != 5){ cout << "impar[" << r << "] = " << impar[r] << "\n"; r++;}
                 i = 0;
            }
            if(j == 14){
                 r = 0;
                 while(r < i){ cout << "impar[" << r << "] = " << impar[r] << "\n"; r++;}
                 r = 0;
                 while(r < p){ cout << "par[" << r << "] = " << par[r] << "\n"; r++;}
            }                 
    }
    return 0;
}
