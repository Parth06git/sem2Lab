#include<bits/stdc++.h>
using namespace std;

void magicSquare(int n){

    int s[n][n];
    memset(s,0,sizeof(s));
    
    int x=0;
    int y=n/2;
    
    for(int i=1; i<=n*n; i++ ){
        
        if(x==-1 && y==n){
            x+=2;
            y-=1;
        }
        else{
            if(x<0){
                x = n-1;
            }
            if(y==n){
                y=0;
            }
        }
        
        if(s[x][y]!=0){
            x+=2;
            y-=1;
            s[x][y]=i;
        }
        else{
           s[x][y] = i;    
        }
        
        x--;
        y++;
        
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}


int main() {
       
    int n;
    cin>>n;
        
    magicSquare(n);
    return 0;
}
