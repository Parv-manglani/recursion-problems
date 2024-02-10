#include<bits/stdc++.h>
using namespace std;
int num(int a,int n){
	if(a==n) {
	printf("%d",n); 
	return n;}
	printf("%d ",a);
	return num(a+1,n);
}
int main(){
	int a,n;
	cin >> a >> n;
	num(a,n);
}