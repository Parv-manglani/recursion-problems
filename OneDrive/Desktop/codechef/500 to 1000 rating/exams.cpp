#include <bits/stdc++.h>
using namespace std;

int main() {
     int n,x,y,z;
     cin >> n;
     for(int i=0;i<n;i++){
         scanf("%d%d%d",&x,&y,&z);
         int k=x*y;
         if(z>(0.5*k))  printf("yes\n");
         else printf("no\n");
         }
}
