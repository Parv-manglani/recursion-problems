#include<bits/stdc++.h>
using namespace std;
int fn(int a,int b){
	int k=0;
	int c[100];
	for(int i=2;i<a||i<b;i++){
		if(a%i==0 && b%i==0){
	    c[k]=i;
		k++;
	}
	}
	if(k==0) return 1;
	else  return c[k-1];
}
int main(){
	int a,b;
	cin >> a >> b;
	int j=fn(a,b);
	printf("%d",j);
}