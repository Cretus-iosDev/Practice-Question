#include<bits/stdc++.h>
using namespace std;
int palindromeIndex(string s) {
    int n = s.size();
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            // Try removing the character at i.
            bool isLeftPalindrome = true;
            for (int k = i + 1, l = j; k < l; k++, l--) {
                if (s[k] != s[l]) {
                    isLeftPalindrome = false;
                    break;
                }
            }
            if (isLeftPalindrome) {
                return i;
            }
            // Try removing the character at j.
            bool isRightPalindrome = true;
            for (int k = i, l = j - 1; k < l; k++, l--) {
                if (s[k] != s[l]) {
                    isRightPalindrome = false;
                    break;
                }
            }
            if (isRightPalindrome) {
                return j;
            }
            // The string can't be made into a palindrome by removing one character.
            return -1;
        }
    }
    // The string is already a palindrome.
    return -1;
}


int main()
{
    return 0;
}