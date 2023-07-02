#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

// Sort 012

// vector<int> sortedArray(vector<int>& nums) {
//     int n = nums.size();
//     int p0 = 0, p1 = 0, p2 = n-1;
//     while (p1<=p2){
//         if(nums[p1] == 0){
//             swap(nums[p1], nums[p0]);
//             p1++;
//             p0++;
//         } else if (nums[p1] == 2) {
//             swap(nums[p1], nums[p2]);
//             p2--;
//         } else {
//             p1++;
//         }
//     }
//     return nums;
// }

// set matrix zero

// void setZeroes(vector<vector<int>>& matrix) {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     vector<int> rows(m, 0);
//     vector<int> columns(n, 0);
//     for (int i=0; i<m; i++){
//         for (int j=0; j<n; j++){
//             if (matrix[i][j] == 0){
//                 rows[i] = 1;
//                 columns[j] = 1;
//             }
//         }
//     }
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             if(rows[i] == 1 || columns[j] == 1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }

// search a 2d matrix ii

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = 0;
    int n = matrix[0].size()-1;
    while (m<=matrix.size()-1 and n>=0){
        if(target == matrix[m][n]){
            return true;
        } else if (target < matrix[m][n]){
            n--;
        } else if (target > matrix[m][n]){
            m++;
        }
    }
    return false;
}

int main() {
    return 0;
}