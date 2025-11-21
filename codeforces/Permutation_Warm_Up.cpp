#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int x = n / 2;
int sum = x * (2 * n - 2 - (x - 1) * 2);
int ans = sum / 2 + 1;
cout << ans << '\n';
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result = (n * n) / 4 + 1;
        cout << result << '\n';
    }

    return 0;
}
