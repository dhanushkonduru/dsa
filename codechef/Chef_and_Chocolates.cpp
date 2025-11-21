#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        int total_money = 5 * X + 10 * Y;
        int max_chocolates = total_money / Z;
        
        cout << max_chocolates << endl;
    }
    
    return 0;
}
