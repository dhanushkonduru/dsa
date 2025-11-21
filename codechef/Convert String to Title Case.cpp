#include <bits/stdc++.h>
using namespace std;

string to_title_case(const string& s) {
    stringstream ss(s);
    string word;
    string result;

    while (ss >> word) {
        if (!result.empty()) {
            result += " ";
        }
        bool is_acronym = true;
        for (char c : word) {
            if (!isupper(c)) {
                is_acronym = false;
                break;
            }
        }
        if (is_acronym) {
            result += word;
        } else {
            result += toupper(word[0]);
            for (size_t i = 1; i < word.length(); ++i) {
                result += tolower(word[i]);
            }
        }
    }
    return result;
}
int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    vector<string> results;
    for (int i = 0; i < T; ++i) {
        string S;
        getline(cin, S);
        results.push_back(to_title_case(S));
    }
    for (const string& result : results) {
        cout << result << endl;
    }
    return 0;
}
