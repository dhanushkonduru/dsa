#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int M = *min_element(A.begin(), A.end());
        int count_greater_than_M = 0;
        
        for (int i = 0; i < N; ++i) {
            if (A[i] > M) {
                count_greater_than_M++;
            }
        }

        cout << count_greater_than_M << endl;
    }
    return 0;
}