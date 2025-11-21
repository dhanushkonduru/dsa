#include <bits/stdc++.h>
using namespace std;

bool is_happy(const string& s) {
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;
    
    for (char ch : s) {
        if (vowels.find(ch) != vowels.end()) {
            count++;
            if (count > 2) {
                return true;
            }
        } else {
            count = 0;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    string S;
    
    for (int i = 0; i < T; i++) {
        cin >> S;
        if (is_happy(S)) {
            cout << "HAPPY" << endl;
        } else {
            cout << "SAD" << endl;
        }
    }
    
    return 0;
}