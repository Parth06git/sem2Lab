#include<iostream>
using namespace std;

int main(){
	int n,m=1;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int k=1;k<=n-i;k++){
			cout<<" ";	
		}
		for(int j=0;j<=i;j++){
			if(j==0 || i==0){
				m=1;
			}
			else{
				m=m*(i-j+1)/j;
			}
			cout<<m<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
