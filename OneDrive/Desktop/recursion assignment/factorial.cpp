#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	int k=1;
	if(n==1)  return 1;
	return n*factorial(n-1);
	
}
int main(){
    int n;
    cin >> n;
    int j=factorial(n);
    cout << j;
}