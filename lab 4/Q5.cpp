#include<iostream>
using namespace std;

int factorial(int n){
	int r=1;
	for(int i=1;i<=n;i++){
		r=r*i;
	}
	return r;
}

int ncr(int n,int r){
	int a;
	a= factorial(n)/(factorial(n-r)*factorial(r));
	return a;
}

int main(){
	int n,r,a;
	cout<<"Enter the value of n and r"<<endl;
	cin>>n>>r;
	cout<<ncr(n,r)<<endl;
}
