#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> scores(N);
        for (int i = 0; i < N; ++i) {
            cin >> scores[i];
        }
        sort(scores.begin(), scores.end());
        int passingMark;
        if (X == N) {
            passingMark = scores[0] - 1;
        } else {
            passingMark = scores[N - X] - 1;
        }
        cout << passingMark << endl;
    }
    return 0;
}