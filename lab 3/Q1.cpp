#include <iostream>
using namespace std;

int main(){
	
	int n,i=1,x;
	cout<<"Enter the number"<<endl;
	cin>>n;
	while(i<=10){
		x=n*i;
		cout<<n<<"*"<<i<<"="<<x<<endl;
		i++;
	}
	
	return 0;
}
