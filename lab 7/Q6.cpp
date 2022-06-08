#include<bits/stdc++.h>
using namespace std;

int len(char *S){
    if(*S == '\0'){
        return 0;
    }
    else{
        return 1+len(S+1);
    }
}

int main(){
	char S[1000];
    cin.getline(S,1000);

    cout<<len(S)<<endl;
    
    return 0;
}
