#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int n;
        scanf("%d",&n);
        int ans5=-1;
        for (int i=0;i*3<=n;i++)
        {
            int tot=n-3*i;
            if (tot%5==0)
                ans5=3*i;
        }
        if (ans5==-1) puts("-1");
        else
        {
            for (int i=0;i<ans5;i++)
                printf("5");
            for (int i=0;i<n-ans5;i++)
                printf("3");
            puts("");
        }
    }
    return 0;
}