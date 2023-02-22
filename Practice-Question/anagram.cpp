#include <bits/stdc++.h>

using namespace std;

int anagram(string s) {
    int n = s.size();
    if (n % 2 == 1) {
        return -1;
    }
    int freq[26] = {0};
    for (int i = 0; i < n/2; i++) {
        freq[s[i] - 'a']++;
    }
    for (int i = n/2; i < n; i++) {
        freq[s[i] - 'a']--;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        ans += abs(freq[i]);
    }
    return ans/2;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        int result = anagram(s);
        cout << result << endl;
    }
    return 0;
}
