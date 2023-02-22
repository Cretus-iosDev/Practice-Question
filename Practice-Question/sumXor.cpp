#include<bits/stdc++.h>
using namespace std;
long sumXor(long n) {
    if (n == 0) {
        return 1;
    }
    int numZeros = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            numZeros++;
        }
        n /= 2;
    }
    return 1L << numZeros;
}

int main()
{
    return 0;
}