#include <iostream>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main(){
	int l, v, test;
    while (scanf("%d", &l) != EOF) {
        test = 0;
        while (l--) {
            cin >> v;
            if (v > test) test = v;
        }
        if (test < 10){
        	puts("1");
        }
        else if (test < 20){
        	puts("2");
        }
        else {
        	puts("3");
        }
    }
    return 0;
}