#include <bits/stdc++.h>

using namespace std;

void insertionSort(int ar_size, int *ar) {
    for(int i=1;i<ar_size;i++){
        int j=i-1;
        int val=ar[i];
        while(j>=0 && ar[j]>val){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=val;
    }
    for(int i=0;i<ar_size;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main(void) {
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
    }

    insertionSort(_ar_size, _ar);

    return 0;
}
