#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> cutTheSticks(vector<int> arr) {
    vector<int> result;
    sort(arr.begin(), arr.end()); // sort the sticks in non-decreasing order
    while (!arr.empty()) {
        int count = arr.size(); // count the number of sticks before cutting
        int smallest = arr[0]; // get the length of the shortest stick
        result.push_back(count); // add the count to the result vector
        arr.erase(remove(arr.begin(), arr.end(), smallest), arr.end()); // remove the shortest sticks
        for (int i = 0; i < arr.size(); i++) {
            arr[i] -= smallest; // cut the remaining sticks
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = cutTheSticks(arr);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
