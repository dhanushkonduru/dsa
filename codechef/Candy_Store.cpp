#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y;
        int total_amount;
        if (Y <= X) {
            total_amount = Y;
        } else {
            total_amount = X + 2 * (Y - X);
        }
        cout << total_amount << endl;
    }
    return 0;
}

