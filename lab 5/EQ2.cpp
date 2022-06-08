#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void majority(int arr[],int n){
	
	
	vector<bool> visited(n, false);
	int x=0;
	int maxc=0;
	
	for(int i=0;i<n;i++){
		if(visited[i]==true){
			continue;
		}
		int c=0;
		for(int j=i;j<n;j++){
			if(arr[i]==arr[j]){
				visited[j]=true;
				c++;
			}
		}
		if(c>maxc){
			maxc=c;
			x=i;
		}
	}
	
	if(maxc>n/2){
		cout<<arr[x]<<" is majority element"<<endl;
	}
	else{
		cout<<"No majority element"<<endl;
	}
	
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	majority(a,n);
}



