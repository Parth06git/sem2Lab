#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[10]={2,3,4,2,3,4,1,2,3,4};
	int n=10;
	bool visited[n]={false};
	
	for(int i=0;i<n;i++){
		if(visited[i]==true){
			continue;
		}
		for(int j=i;j<n;j++){
			if(a[i]==a[j]){
				visited[j]=true;
			}
		}
		cout<<a[i]<<" ";
	}
	
	return 0;
}
