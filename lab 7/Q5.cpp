#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n){
    if(n==0||n==1){
        return true;
    }
    if(a[n-1]<a[n-2]){
        return false;
    }
    
    return check(a,n-1);
}

int main(){
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(check(a,n)==true){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    
    return 0;
    
}
