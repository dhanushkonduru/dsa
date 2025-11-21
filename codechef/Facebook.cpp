#include <bits/stdc++.h>
using namespace std;

int findMostPopularPost(int N, const vector<int>& A, const vector<int>& B) {
    int maxLikes = -1;
    int maxComments = -1;
    int popularPostIndex = -1;
    for (int i = 0; i < N; ++i) {
        int likes = A[i];
        int comments = B[i];
        if (likes > maxLikes || (likes == maxLikes && comments > maxComments)) {
            maxLikes = likes;
            maxComments = comments;
            popularPostIndex = i + 1; 
        }
    }
    return popularPostIndex;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        vector<int> B(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }
        int result = findMostPopularPost(N, A, B);
        cout << result << endl;
    }
    return 0;
}