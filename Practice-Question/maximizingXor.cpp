#include <iostream>
using namespace std;

int maximizingXor(int l, int r) {
    int max_xor = 0;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++){
            max_xor = max(max_xor, i ^ j);
        }
    }
    return max_xor;
}

int main() {
    int l, r;
    cin >> l >> r;
    int result = maximizingXor(l, r);
    cout << result << endl;
    return 0;
}
