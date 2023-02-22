#include <bits/stdc++.h>
using namespace std;

string appendAndDelete(string s, string t, int k) {
    int i = 0;
    while (s[i] == t[i]) { // find the common prefix
        i++;
    }
    int minOps = s.length() + t.length() - 2*i; // calculate the minimum operations required
    if (k >= minOps && k%2 == minOps%2 || k >= s.length() + t.length()) {
        return "Yes";
    }
    return "No";
}

int main() {
    string s, t;
    int k;
    cin >> s >> t >> k;
    string result = appendAndDelete(s, t, k);
    cout << result << endl;
    return 0;
}
