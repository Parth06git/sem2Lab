#include<iostream>
#include<limits.h>
using namespace std;

int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}

int triplet(int a[],int n){
	int fmin=INT_MAX, smin=INT_MAX, tmin=INT_MAX;
	for(int i=0;i<n;i++){
		if(a[i]<fmin){
			tmin=smin;
			smin=fmin;
			fmin=a[i];
		}
		else if(a[i]<smin){
			tmin=smin;
			smin=a[i];
		}
		else if(a[i]<tmin){
			tmin=a[i];
		}
	}
	
	cout<<"The pair of triplet is "<<fmin<<","<<smin<<","<<tmin<<endl;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	triplet(a,n);
	
	return 0;
	
}


