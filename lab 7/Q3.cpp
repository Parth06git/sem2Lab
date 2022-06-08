#include<bits/stdc++.h>
using namespace std;


int findmin(const int a[], int n)
{
    if(n == 0)
        return a[0];
    else
    {
        if(a[n-1] < findmin(a,(n-1)))
            return a[n-1];
      else
            return findmin(a,(n-1));
    }
    
}

int main(){
	int a[10]={10,2,3,4,5,6,7,8,9,8};
	int c;
	c = findmin(a,10);
	cout<<c<<endl;
	
	return 0;
	
}
