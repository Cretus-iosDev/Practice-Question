#include <iostream>

using namespace std;

int chocolateFeast(int n, int c, int m) {
    int chocolates = n / c;  // number of chocolates that Bobby can initially buy
    int wrappers = chocolates;  // initial number of wrappers
    while (wrappers >= m) {
        int freeChocolates = wrappers / m;  // number of free chocolates that Bobby can get
        chocolates += freeChocolates;  // add the free chocolates to the total count
        wrappers = wrappers % m + freeChocolates;  // update the number of wrappers
    }
    return chocolates;
}

int main() {
    int t;
    cin >> t;  // number of test cases
    for (int i = 0; i < t; i++) {
        int n, c, m;
        cin >> n >> c >> m;  // input for each test case
        cout << chocolateFeast(n, c, m) << endl;  // output the result
    }
    return 0;
}
