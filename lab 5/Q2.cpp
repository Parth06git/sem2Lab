#include<iostream>
using namespace std;

int count(int arr[],int n){
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
      		if(i<j){
        		if(arr[i]<arr[j]){
        			c++;
        		}
      		}
    	}
	}
	
	return c;
}

int main(){
	int n;
	cout<<"Enter the number of terms: "<<endl;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		cout<<"Enter the "<<i<<"th element of array"<<endl;
		cin>>arr[i-1];
	}
	
	cout<<"Number of valid pairs is "<<count(arr, n)<<endl;
	
	return 0;
}
