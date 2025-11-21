#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];

        vector<int> labels(n, 1);
        bool found = false;

        for(int i = 1; i < n; ++i) {
            if(a[i] != a[0]) {
                labels[i] = 2;
                found = true;
            }
        }

        if (!found) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            for (int i = 0; i < n; ++i)
                cout << labels[i] << " ";
            cout << "\n";
        }
    }

    return 0;
}
