#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> numbers(N);
    
    // Reading the numbers
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }
    
    // Sorting the numbers
    sort(numbers.begin(), numbers.end());
    
    // Printing the sorted numbers
    for (int i = 0; i < N; ++i) {
        cout << numbers[i] << endl;
    }
    
    return 0;
}