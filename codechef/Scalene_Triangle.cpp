#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        if (A != B && B != C && A != C) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}