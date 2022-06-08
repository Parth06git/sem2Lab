#include<bits/stdc++.h>
using namespace std;

int cmp(char *s,char *a, int i=0){
	if(s[i]=='\0'&&a[i]=='\0'){
		return 0;
	}
	if(s[i]==a[i]){
		return cmp(s,a,i+1);
	}
	else if(s[i]>a[i]){
		return 1;
	}
	else{
		return -1;
	}
}

int main(){
	char s[1000];
	char a[1000];
	cin.getline(s,1000);
	cin.getline(a,1000);
	cout<<cmp(s,a);
	
	return 0;
	
}


