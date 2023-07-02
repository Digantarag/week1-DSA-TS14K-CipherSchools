// finding first and last occurence using iterative solution of O(log n) time complexity

#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int edge(vector<int>& nums, int l, int h, int target){
    while (l <= h){
        int mid = l + (h-l) / 2;
        if(nums[mid] < target){
            l = mid+1;
        } else {
            h = mid-1;
        }
    }
    return l;
}

vector<int> FirstAndLastOccurence(vector<int>& nums, int target){
    int low = 0, high = nums.size()-1;
    int start = edge(nums, low, high, target);
    int end = edge(nums, low, high, target+1);
    if(start < nums.size() and nums[start] == target){
        return {start, end-1};
    }
    return {-1, -1};
}


int main() {
    
    return 0;
}