#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string twoStrings(string s1, string s2) {
    // Use an unordered set to keep track of the characters in s1
    unordered_set<char> charSet;

    // Insert each character of s1 into the set
    for (char c : s1) {
        charSet.insert(c);
    }

    // Check if any character of s2 is in the set
    for (char c : s2) {
        if (charSet.count(c) > 0) {
            return "YES";
        }
    }

    // If no common substring found, return "NO"
    return "NO";
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }

    return 0;
}
