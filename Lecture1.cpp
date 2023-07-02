#include <iostream>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;

void mergeArray(vector<int> &a, vector<int> &b, int m, int n){
    int i = m-1 , j = n-1, k = m+n-1;
    while(i >= 0 or j >= 0){
        if (a[i] >= b[j]){
            a[k] = a[i];
            i--;
            k--;
        } else {
            a[k] = b[j];
            j--;
            k--;
        }
    }
    while (j >= 0) {
        a[k] = b[j];
        j--;
        k--;
    }
}

int main() {
    return 0;
}