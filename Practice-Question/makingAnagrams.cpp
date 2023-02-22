#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int makingAnagrams(string s1, string s2) {
    int count = 0;
    int freq1[26] = {0}, freq2[26] = {0};

    // Count the frequency of characters in s1
    for (int i = 0; i < s1.length(); i++) {
        freq1[s1[i] - 'a']++;
    }

    // Count the frequency of characters in s2
    for (int i = 0; i < s2.length(); i++) {
        freq2[s2[i] - 'a']++;
    }

    // Compare the frequency of characters in s1 and s2
    for (int i = 0; i < 26; i++) {
        count += abs(freq1[i] - freq2[i]);
    }

    return count;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << makingAnagrams(s1, s2) << endl;
    return 0;
}
