#include <iostream>
using namespace std;
int main()
{
int t, n; 
string s; 
cin >> t;
while (t--) {
cin >> n; 
cin >> s;
int result = 0;
for (int i = 0; i < n; i++) {
if (s[i] == '0') {
result += 1;
} else {
result += n - 1;
}
}
cout << result << endl;
}
}