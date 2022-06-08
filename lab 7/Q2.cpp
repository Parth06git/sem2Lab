#include<bits/stdc++.h>

using namespace std;

void subStr(char S[], int low, int high, char T[])
{
    int i,j;
    
    for(i=low,j=0; i<= high && S[i]!='\0';i++,j++)
    {
      T[j] = S[i]; 
    }
    T[j] ='\0';   
    
}


int main()
{
    char S[100] = "India is my country. I love India. All Indians are my brothers and sisters";
    char W[10] ="India";
    char T[100];
    int len = strlen(W);
    int c=0;

    for(int i=0; S[i]!='\0';i++)
    {
        subStr(S,i,i+len-1,T);
        if(strcmp(T,W) == 0){
            c++;
        }
    }

    cout<<c;
 
    return 0;

}
