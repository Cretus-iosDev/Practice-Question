#include <iostream>

using namespace std;

long strangeCounter(long t) {
    long val = 3;
    while (t > val) {
        t = t - val;
        val *= 2;
    }
    return val - t + 1;
}

int main() {
    long t;
    cin >> t;
    cout << strangeCounter(t) << endl;
    return 0;
}
