#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int stringConstruction(string s) {
    unordered_set<char> uniqueChars;
    for (char c : s) {
        uniqueChars.insert(c);
    }
    return uniqueChars.size();
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cout << stringConstruction(s) << endl;
    }
    return 0;
}
