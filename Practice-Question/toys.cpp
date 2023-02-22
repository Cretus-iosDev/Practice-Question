#include <bits/stdc++.h>
using namespace std;

int toys(vector<int> w) {
    int n = w.size();
    sort(w.begin(), w.end());
    int ans = 1, minWeight = w[0];
    for (int i = 1; i < n; i++) {
        if (w[i] > minWeight + 4) {
            ans++;
            minWeight = w[i];
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    int ans = toys(w);
    cout << ans << endl;
    return 0;
}
