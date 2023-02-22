#include <iostream>
#include <vector>

using namespace std;

void insertionSort1(int n, vector<int> arr) {
    int unsorted = arr[n-1]; // store the value of the unsorted element
    int i = n-2; // start at the second-to-last index
    while (i >= 0 && arr[i] > unsorted) {
        arr[i+1] = arr[i]; // shift elements to the right
        i--;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " "; // print the array after each shift
        }
        cout << endl;
    }
    arr[i+1] = unsorted; // insert the unsorted element at the correct index
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " "; // print the final sorted array
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertionSort1(n, arr);
    return 0;
}
