// spiral matrix

#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    int sx = 0, sy = 0, ex = matrix.size() - 1, ey = matrix[0].size() - 1;
    vector<int> ans;
    while (sx <= ex and sy <= ey) {
        for (int j = sy; j <= ey; j++) {
            ans.push_back(matrix[sx][j]);
        }
        sx++;

        for (int i = sx; i <= ex; i++) {
            ans.push_back(matrix[i][ey]);
        }
        ey--;

        if (sx <= ex) {
            for (int j = ey; j >= sy; j--) {
                ans.push_back(matrix[ex][j]);
            }
            ex--;
        }

        if (sy <= ey) {
            for (int i = ex; i >= sx; i--) {
                ans.push_back(matrix[i][sy]);
            }
            sy++;
        }
    }
    return ans;
}

int main() {

    return 0;
}