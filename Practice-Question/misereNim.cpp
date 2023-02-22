#include <bits/stdc++.h>
using namespace std;

string misereNim(vector<int> s) {
    int n = s.size();
    int xorSum = 0, sum = 0, minPile = INT_MAX;
    for (int i = 0; i < n; i++) {
        xorSum ^= s[i];
        sum += s[i];
        minPile = min(minPile, s[i]);
    }
    if ((xorSum == 0 && sum == n) || (xorSum != 0 && minPile > 1 && sum == n)) {
        return "First";
    }
    return "Second";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        string result = misereNim(s);
        cout << result << endl;
    }
    return 0;
}
