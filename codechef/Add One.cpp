#include <bits/stdc++.h>
using namespace std;

string add_one_to_large_number(string num) {
    int n = num.length();
    int carry = 1;
    for (int i = n - 1; i >= 0; --i) {
        if (carry == 0) break;
        
        int digit = num[i] - '0';
        int sum = digit + carry;
        
        num[i] = (sum % 10) + '0';
        carry = sum / 10;
    }
    if (carry > 0) {
        num = '1' + num;
    }

    return num;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string N;
        cin >> N;
        cout << add_one_to_large_number(N) << endl;
    }

    return 0;
}
