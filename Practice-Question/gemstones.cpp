#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int gemstones(vector<string> arr) {
    // Initialize a vector of 26 integers to keep track of the frequency of each mineral
    vector<int> mineralFreq(26, 0);

    // For each rock, update the mineral frequency vector
    for (string rock : arr) {
        for (char mineral : rock) {
            mineralFreq[mineral - 'a']++;
        }
    }

    // Count the number of minerals that occur in every rock (i.e. have a frequency equal to the number of rocks)
    int numGemstones = 0;
    for (int freq : mineralFreq) {
        if (freq == arr.size()) {
            numGemstones++;
        }
    }

    return numGemstones;
}

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = gemstones(arr);
    cout << result << endl;

    return 0;
}
