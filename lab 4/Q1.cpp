#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the value "<<endl;
	cin>>n;
	cout<<"You enter the value as "<<n<<endl;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			for(int k=1;k<n;k++){
				if(i+j+k==n){
					cout<<i<<"+"<<j<<"+"<<k<<"="<<n<<endl;
				}
			}
		}
	}
	
	return 0;
}

