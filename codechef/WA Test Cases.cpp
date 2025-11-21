#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> sizes(N);
        for (int i = 0; i < N; ++i) {
            cin >> sizes[i];
        }
        string V;
        cin >> V;
        int smallestFailSize = INT_MAX;
        for (int i = 0; i < N; ++i) {
            if (V[i] == '0') {
                if (sizes[i] < smallestFailSize) {
                    smallestFailSize = sizes[i];
                }
            }
        }
        cout << smallestFailSize << endl;
    }
    return 0;
}