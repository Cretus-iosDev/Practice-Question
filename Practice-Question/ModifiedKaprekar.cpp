#include <iostream>
#include <string>

using namespace std;

bool isModifiedKaprekar(int n) {
    long long square = n * 1LL * n;
    string squareString = to_string(square);
    int d = to_string(n).length();
    int rightDigits = stoi(squareString.substr(squareString.length() - d));
    int leftDigits = squareString.length() - d;
    if (leftDigits > 0) {
        int leftNum = stoi(squareString.substr(0, leftDigits));
        return leftNum + rightDigits == n;
    }
    return rightDigits == n;
}

void kaprekarNumbers(int p, int q) {
    bool found = false;
    for (int i = p; i <= q; i++) {
        if (isModifiedKaprekar(i)) {
            found = true;
            cout << i << " ";
        }
    }
    if (!found) {
        cout << "INVALID RANGE";
    }
}

int main() {
    int p, q;
    cin >> p >> q;
    kaprekarNumbers(p, q);
    return 0;
}
