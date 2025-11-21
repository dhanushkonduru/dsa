#include <bits/stdc++.h>
using namespace std;

void processGame(int N, const string& S) {
    int aliceScore = 0, bobScore = 0;
    char server = 'A';  

    for (int i = 0; i < N; ++i) {
        if (S[i] == server) {
            if (server == 'A') {
                aliceScore++;
            } else {
                bobScore++;
            }
        } else {
            server = S[i];
        }
    }
    cout << aliceScore << " " << bobScore << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        processGame(N, S);
    }
    return 0;
}