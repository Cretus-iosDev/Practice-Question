#include <iostream>
#include <vector>

using namespace std;

vector<int> countingSort(vector<int> arr) {
    vector<int> freq(100, 0); // initialize frequency array with 100 zeros
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++; // increment frequency count for each element
    }
    return freq;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> freq = countingSort(arr);
    for (int i = 0; i < freq.size(); i++) {
        cout << freq[i] << " ";
    }
    cout << endl;
    return 0;
}
