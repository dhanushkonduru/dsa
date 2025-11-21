#include <bits/stdc++.h>
using namespace std;

string should_buy_coupon(int N, int X, int Y, const vector<int>& prices) {
    int total_without_coupon = accumulate(prices.begin(), prices.end(), 0);
    int total_with_coupon = X; // Cost of the coupon
    for(int price : prices) {
        total_with_coupon += max(0, price - Y);
    }
    return total_with_coupon < total_without_coupon ? "COUPON" : "NO COUPON";
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, X, Y;
        cin >> N >> X >> Y;
        vector<int> prices(N);
        for(int i = 0; i < N; ++i) {
            cin >> prices[i];
        }
        cout << should_buy_coupon(N, X, Y, prices) << endl;
    }
    return 0;
}