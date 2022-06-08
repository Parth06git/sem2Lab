 #include<iostream>
using namespace std;

int sumOfDigits(int n){
	int r,t=0;
	while(n!=0){
		r=n%10;
		t=t+r;
		n=n/10;
	}
	return t;
}

int convertToDigit(int n){
	int a;
	while(n>10){
		a=sumOfDigits(n);
		n=a;
	}
	
	return a;
}

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<"Your answer is "<<convertToDigit(n)<<endl;
}
