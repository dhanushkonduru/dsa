#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;
        string results;
        cin >> results;

        int carlsen_points = 0;
        int chef_points = 0;

        for (char result : results) {
            if (result == 'C') {
                carlsen_points += 2;
            } else if (result == 'N') {
                chef_points += 2;
            } else if (result == 'D') {
                carlsen_points += 1;
                chef_points += 1;
            }
        }

        if (carlsen_points > chef_points) {
            cout << 60 * X << endl;
        } else if (chef_points > carlsen_points) {
            cout << 40 * X << endl;
        } else {
            cout << 55 * X << endl;
        }
    }

    return 0;
}
