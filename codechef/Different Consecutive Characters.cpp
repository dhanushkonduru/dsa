#include <iostream>
#include<string>
using namespace std;

int main() {
    
    int n,i,n1,j;
    string s;
    cin>>n;
    
    string p="0";
    string q="1";
    
    for(i=0;i<n;i++)
    {
        cin>>n1;
        cin>>s;
        int n=0;
        for(j=0;j<n1;j++)
        {
            if(s[j]==s[j+1])
            {
                n++;
            }
        }
        cout<<n;
        cout<<endl;
    }
return 0;
}