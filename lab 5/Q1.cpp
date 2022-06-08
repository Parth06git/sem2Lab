#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		s=s+arr[i];
	}
	return s;
}

float mean(int arr[],int n){
	float m;
	m= (float)sum(arr,n)/(float)n;
	return m;
}

void sort(int A[], int n){
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(A[i]>A[j]){
                int item =A[i];
                A[i]=A[j];
                A[j]= item;
            }
        }
    }
    return;
}

int median(int arr[],int n){
	
	sort(arr,n);
	if(n/2!=0){
		return arr[n/2];
	}
	
	return (double)(arr[(n-1)/2]+arr[(n+1)/2]/2.0);
	
}

int mode(int a[],int n){
	int maxcount=0,curcount=0,cur=0,most=0;
	for(int i=0;i<n;i++){
		cur=a[i];
		for(int j=i+1;j<n;j++){
			if(cur==a[j]){
				curcount++;
				cur=a[j];
			}
			if(curcount>maxcount){
				maxcount=curcount;
				most=a[j];
			}
		}
	}
	
	return most;
	
}

int main(){
	int n;
	cout<<"Enter the number of terms "<<endl;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		cout<<"Enter the value of "<<i<<"th element "<<endl;
		cin>>arr[i-1];
	}
	
	cout<<"The mean of array is "<<mean(arr,n)<<endl;
	cout<<"The median of array is "<<median(arr,n)<<endl;
	cout << "The mode is: " <<mode(arr,n)<< endl;

	return 0;

}

