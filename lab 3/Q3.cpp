#include <iostream>
using namespace std;

int main(){
	
	int n,sum=0;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=1; i <= n; i++){
		cout<<i<<endl;
		sum = sum + i;
	}
	cout<<"The sum of first n natural number is "<<sum<<endl;
	
	return 0;
}
