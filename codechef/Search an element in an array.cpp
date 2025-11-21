#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int s;
    cin >> n >> s;
    int arr[n];
    for(int i; n>i; i++)
    {
        cin >> arr[i];
    }
    int flag=0;
    for(int i; n>i; i++)
    {
        if(s == arr[i])
        {
            cout << "Yes";
            flag++;
            break;
        }
    }
    if(flag == 0) cout << "NO";
}
