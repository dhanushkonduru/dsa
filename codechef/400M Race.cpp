#include <bits/stdc++.h>
using namespace std;

vector<string> findFastestRunners(int T, vector<vector<int>>& testCases) {
    vector<string> results;
    for (int i = 0; i < T; i++) {
        int X = testCases[i][0];
        int Y = testCases[i][1];
        int Z = testCases[i][2];
        if (X < Y && X < Z) {
            results.push_back("ALICE");
        } else if (Y < X && Y < Z) {
            results.push_back("BOB");
        } else {
            results.push_back("CHARLIE");
        }
    }
    return results;
}

int main() {
    int T;
    cin >> T;
    vector<vector<int>> testCases(T, vector<int>(3));
    for (int i = 0; i < T; i++) {
        cin >> testCases[i][0] >> testCases[i][1] >> testCases[i][2];
    }

    vector<string> results = findFastestRunners(T, testCases);

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}

