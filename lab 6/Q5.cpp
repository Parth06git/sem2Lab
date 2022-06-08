#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	vector<bool> mark(26,false);
	int n;
	for(int i=0;i<s.length();i++){
		if('A'<=s[i]&&s[i]<='Z'){
			n=s[i]-'A';
		}
		else if('a'<=s[i]&&s[i]<='z'){
			n=s[i]-'a';
		}
		else{
			continue;
		}
		mark[n]=true;
	}
	
	for(int i=0;i<26;i++){
		if(mark[i]==false){
			return (false);
		}
	}
	
	return (true);
}

int main(){
    int t;
    cin>>t;
    
    while(t>=0){
        string s;
        getline(cin,s);
        cin.ignore();
        if(check(s)==true){
            cout<<"1"<<endl;;
        }
        else{
            cout<<"0"<<endl;
        }
    
        t--;
    
    }
    return 0;
}







