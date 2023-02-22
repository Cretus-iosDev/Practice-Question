#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string gameOfThrones(string s) {
    // Count the frequency of each character in the string
    unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    
    // Check if there is at most one character with odd frequency
    bool oddFound = false;
    for (auto& p : charCount) {
        if (p.second % 2 != 0) {
            if (oddFound) {
                return "NO";
            }
            oddFound = true;
        }
    }
    
    return "YES";
}

int main() {
    string s;
    cin >> s;
    cout << gameOfThrones(s) << endl;
    return 0;
}
