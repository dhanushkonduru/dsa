#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> freshness(N);
        vector<int> cost(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> freshness[i];
        }
        
        for (int i = 0; i < N; ++i) {
            cin >> cost[i];
        }
        
        int total_cost = 0;
        for (int i = 0; i < N; ++i) {
            if (freshness[i] >= X) {
                total_cost += cost[i];
            }
        }
        
        cout << total_cost << endl;
    }
    return 0;
}