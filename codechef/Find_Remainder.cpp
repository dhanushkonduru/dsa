#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        int A, B;
        cin >> A >> B;
        
        int remainder = A % B;
        cout << remainder << endl;
    }
    
    return 0;
}
