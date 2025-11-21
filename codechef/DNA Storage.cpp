#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin >> n;
    string a="";

    for(i=0;i<n;i++) {
        int n1;
        cin >> n1;
        
        string s;
        cin >> s;

        
        int p = 0;

        for (int j = 0; j < n1; j++) {
            p++;
            a += s[j];

            if (p % 2 == 0) {
                if (a == "00") {
                    cout << "A";
                } else if (a == "01") {
                    cout << "T";
                } else if (a == "10") {
                    cout << "C";
                } else if (a == "11") {
                    cout << "G";
                }
                a = "";  
            }
        }
        cout << endl;  
    }

    return 0;
}