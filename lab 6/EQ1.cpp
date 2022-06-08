#include<bits/stdc++.h>
using namespace std;

void reverseWord(string s){
	stack<char> a;
	
	for(int i=0;i<s.length();i++){
		if(s[i]!=' '){
			a.push(s[i]);
		}
		else{
			while(a.empty()==false){
				cout<<a.top();
				a.pop();
			}
			cout<<" ";
		}
	}
	while(a.empty()==false){
		cout<<a.top();
		a.pop();
	}
}

int main(){
	string s;
	getline(cin,s);
	reverseWord(s);
	
	return 0;
	
}
