#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
// 3 SUM problem

vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3){
            return {};
        }
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i=0; i<nums.size()-2; i++){
            int curr = nums[i];
            int start = i+1, end = nums.size()-1;
            while(start < end){
                int mid = start + (end - start) / 2;
                if(curr + nums[start] + nums[end] == 0){
                    ans.push_back({curr, nums[start], nums[end]});
                    start++; end--;
                    while(start<end and nums[start - 1] == nums[start]){
                        start++;
                    }
                    while(start<end and  nums[end] == nums[end + 1]){
                        end--;
                    }
                } else if (curr + nums[start] + nums[end] < 0){
                    start++;
                } else {
                    end--;
                }
            }
            while (i< nums.size() - 1 and nums[i] == nums[i+1]){
                i++;
            }
        }
        return ans;
}

int main() {
    
    return 0;
}