#include <bits/stdc++.h>
using namespace std;

void findWhoTakesHome(int A) {
    if (A % 2 == 0 && A % 7 == 0) {
        cout << "Alice" << endl;
    } else if (A % 2 != 0 && A % 9 == 0) {
        cout << "Bob" << endl;
    } else {
        cout << "Charlie" << endl;
    }
}

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        int A;
        cin >> A;
        findWhoTakesHome(A);
    }
    return 0;
}
