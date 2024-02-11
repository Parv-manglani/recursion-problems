#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,count=0,p=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
	    if(a[i]%2==0)  count++;
	    else p++;
	}
	if(count>p) printf("READY FOR BATTLE");
	else  printf("NOT READY");

}
