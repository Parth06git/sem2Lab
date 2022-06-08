#include<bits/stdc++.h>
using namespace std;

int main(){
	char A[100];
	char B[100];
	bool equal=false;
	cin>>A;
	cin>>B;
	for(int i=0;A[i]!='\0'||B[i]!='\0';i++){
		if(A[i]==B[i]){
			equal=true;
		}
		else if(A[i]<B[i]){
			cout<<"-1"<<endl;
			equal=false;
			break;
		}
		else{
			cout<<"1"<<endl;
			equal=false;
			break;
		}
	}
	if(equal==true){
		cout<<"0"<<endl;
	}
	
	return 0;
	
}
