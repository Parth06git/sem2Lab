#include<bits/stdc++.h>
using namespace std;

int minElementIndex(int B[], int l, int h){
	int currentMin,i,currentIndex;
	currentMin = B[l];
	currentIndex = l;
	for(int i=l+1;i<=h;i++){
		if(B[i]<currentMin){
			currentMin = B[i];
			currentIndex = i;
		}
	}
	return currentIndex;
}

void swap(int B[], int i, int j){
	
	int t;
	t=B[i];
	B[i]=B[j];
	B[j]=t;
	
}

void selectionSort(int B[], int l, int h){
	
	int x;
	for(int i=l; i<=h-1; i++){
		x = minElementIndex(B,i,h);
		swap(B,i,x);
	}
	
}

int main(){
	
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
	selectionSort(A,x,y);
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
	return 0;
	
}

