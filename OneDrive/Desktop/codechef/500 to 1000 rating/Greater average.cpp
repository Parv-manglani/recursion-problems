#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	float a,b,c;
	cin >> t;
	for(int i=0;i<t;i++){
	   scanf("%f%f%f",&a,&b,&c);
	    float k=(a+b)/2;
	    if(k>c) printf("Yes\n");
	    else  printf("No\n");
	}

}