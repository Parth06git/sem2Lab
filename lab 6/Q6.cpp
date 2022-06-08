#include<bits/stdc++.h>
using namespace std;

char *remove(char *s){
	int i=0,j=0;
	while(s[i]){
		if(s[i]!=' '){
			s[j]=s[i];
			j++;
		}
		i++;
	}
	s[j]='\0';
	return s;
}

int main(){
	int t;
	cin>>t;
	while(t>=0){
		char s[100];
		cin.getline(s,100);
		cout<<remove(s);
		
		t--;
	}
	
	return 0;
	
	
}
