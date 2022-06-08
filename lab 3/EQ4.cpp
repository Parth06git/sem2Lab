#include <iostream>
using namespace std;

int chk(int n){
	int i, isPrime=1;
	if(n==0 || n==1){
		isPrime=0;
	}
	else{
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				isPrime=0;
				break;
			}
		}
	}
	return isPrime;
}

int main(){
	int n,i,f=0;
	cout<<"Enter a positive integer"<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++){
		if(chk(i)==1){
			if(chk(n-i)==1){
				cout<<n<<"="<<i<<"+"<<n-i<<endl;
				f=1;
			}
		}
	}
	if (f==0){
		cout<<n<<"can't express as the sum of two prime number"<<endl;
	}
	return 0;
}
