#include <bits/stdc++.h>

using namespace std;

// Function to find the minimum number of loaves required
string fairRations(vector<int> B) {
    int n = B.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        // If the current person has an odd number of loaves, give one loaf to the current and the next person
        if (B[i] % 2 != 0) {
            B[i]++;
            B[i+1]++;
            count += 2;
        }
    }
    // Check if all persons have even number of loaves after distribution
    for (int i = 0; i < n; i++) {
        if (B[i] % 2 != 0) {
            return "NO";
        }
    }
    return to_string(count);
}

int main() {
    int n;
    cin >> n;
    vector<int> B(n);
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    cout << fairRations(B) << endl;
    return 0;
}
