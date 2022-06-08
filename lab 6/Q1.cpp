#include<bits/stdc++.h>
using namespace std;

int small(char s[]){
	int c=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]>='a' && s[i]<='z'){
			c++;
		}
	}
	
	return c;
	
}

int capital(char s[]){
	int d=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]>='A' && s[i]<='Z'){
			d++;	
		}
	}
	
	return d;
	
}

int total(char s[]){
	int e=0;
	for(int i=0;s[i]!='\0';i++){
		e++;
	}
	
	return e;
	
}

int main(){
	char s[100];
	cin.getline(s,100);
	cout<<"No of small letters is "<<small(s)<<endl;
	cout<<"No of capital letters is "<<capital(s)<<endl;
	cout<<"No of total characters is "<<total(s)<<endl;
	
	return 0;
	
}







