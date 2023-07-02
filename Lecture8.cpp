#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
// subset or power set

void solve(int n, vector<vector<int>> &ans, vector<int> &sans, int i, vector<int> &nums) {
    if (i == n) {
        ans.push_back(sans);
        return;
    }

    sans.push_back(nums[i]);
    solve(n, ans, sans, i + 1, nums);
    sans.pop_back();
    solve(n, ans, sans, i + 1, nums);
}

vector<vector<int>> subsets(vector<int> &nums) {
    vector<vector<int>> ans;
    vector<int> sans;

    solve(nums.size(), ans, sans, 0, nums);
    return ans;
}

int main() {
    return 0;
}