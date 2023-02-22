#include<bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c) {
    int n = c.size();
    int jumps = 0;
    int i = 0;
    while (i < n - 1) {
        if (i + 2 < n && c[i + 2] == 0) {
            i += 2;
        } else {
            i += 1;
        }
        jumps += 1;
    }
    return jumps;
}

int main()
{
    return 0;
}