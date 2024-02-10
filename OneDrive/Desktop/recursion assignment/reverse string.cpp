#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
   char a[100]="parv manglani";
   char b[100];
    for(int i=0;a[i]!='\0';i++){
    	b[i]=a[12-i];
	}
    for(int i=0;b[i]!='\0';i++){
    	printf("%c",b[i]);
	}
}
