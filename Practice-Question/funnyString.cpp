#include <bits/stdc++.h>
using namespace std;

string funnyString(string s) {
    int n = s.size();
    for (int i = 1; i < n; i++) {
        int diff1 = abs(s[i] - s[i-1]);
        int diff2 = abs(s[n-i] - s[n-i-1]);
        if (diff1 != diff2) {
            return "Not Funny";
        }
    }
    return "Funny";
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << funnyString(s) << endl;
    }
    return 0;
}
