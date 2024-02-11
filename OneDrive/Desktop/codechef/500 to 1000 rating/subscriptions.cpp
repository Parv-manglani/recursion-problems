#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b;
	cin >> n;
	for(int i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a<=6) printf("%d\n",b);
		else if(a%6==0)  printf("%d\n",(a/6)*b);
		else printf("%d\n",((a/6)+1)*b);
	}

}
