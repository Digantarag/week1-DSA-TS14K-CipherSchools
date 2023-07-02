// Rotating a matrix by 90 deg 
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void rotate(vector<vector<int>>& matrix){
    for (int i=0; i<matrix.size(); i++){
        for (int j=0; j<=i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    
    return 0;
}