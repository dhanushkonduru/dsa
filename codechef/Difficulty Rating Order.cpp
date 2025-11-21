#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> difficulties(N);
        for (int i = 0; i < N; ++i) {
            cin >> difficulties[i];
        }

        bool isNonDecreasing = true;
        for (int i = 1; i < N; ++i) {
            if (difficulties[i] < difficulties[i - 1]) {
                isNonDecreasing = false;
                break;
            }
        }

        if (isNonDecreasing) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}