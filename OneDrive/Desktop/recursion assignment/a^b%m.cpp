#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,n=1,b,m;
	cin >> a >> b >> m;
	for(int i=0;i<b;i++){
		n*=a;
		n%=m;
	}
	printf("%d",n);
}