#include <iostream>
#include<string.h>

using namespace std;

int main() {
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        for(j=0;j<s1.size();j++)
        {
            
            if(s1[j]==s2[j])
            {
                cout<<"G";
                }
                else 
                {
                  cout<<"B";  
                    
                }
        }
       cout<<endl; 
    }
return 0;
}