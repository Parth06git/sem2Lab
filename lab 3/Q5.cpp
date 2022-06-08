#include <iostream>
using namespace std;

int main(){
	int n,k,r,x=0,t;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<"Enter the value of k "<<endl;
	cin>>k;
	t=n;
	while(t!=0){
		x++;
		t=t/10;
	}
	if(k<=x){
		for(int i=1;i<=k;i++){
			r=n%10;
			cout<<r;
			n=n/10;
		}
	}
	else{
		cout<<"Enter the number again"<<endl;
	}
	
	return 0;
}
