#include<iostream>
using namespace std;

int push(int arr[],int n){
	int c=0;
	for(int i=0;i<n;i++){
	    if(arr[i]!=0){
	      arr[c]=arr[i];
	      c++;
	    }
	}
	while(c<n){
		arr[c]=0;
	    c++;
	}
	
}

int main(){
	int n;
	cout<<"Enter the number of terms:"<<endl;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		cout<<"Enter the value of "<<i<<"th element "<<endl;
		cin>>arr[i-1];
	}
	push(arr,n);
	
	cout<<"The new array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
	
}
