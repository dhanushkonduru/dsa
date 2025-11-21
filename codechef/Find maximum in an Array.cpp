#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n; 
    int x;
    int max_val = INT_MIN; 
    for(int i = 0; i < n; i++) 
    {
        cin >> x;
        if(x > max_val)
        {
            max_val = x;
        }
    }
    cout << max_val << endl; 
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
