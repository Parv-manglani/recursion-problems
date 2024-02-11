#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,c;
	cin >> n;
	for(int i=0;i<n;i++){
	   scanf("%d%d%d",&a,&b,&c);
	    if(a+b+c <=1)  printf("Water filling time\n");
	    else  printf("Not now\n");
	}

}