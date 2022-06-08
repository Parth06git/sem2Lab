#include <iostream>
using namespace std;

int main(){
	
	int n,r,t=0,x;
	cout<<"Enter the number"<<endl;
	cin>>n;
	x=n;
	while(n != 0){
		r=n%10;
		t= t+r*r*r;
		n= n/10;
	}
	
	if(t == x){
		cout<<"The given number is Armstrong number"<<endl;
	}
	else{
		cout<<"The given number is not Armstrong number"<<endl;
	}
	
	
	return 0;
}
