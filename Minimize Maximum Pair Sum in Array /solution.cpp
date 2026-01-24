#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            ans.push_back(nums[start] + nums[end]);
            start++;
            end--;
        }
        
        return *max_element(ans.begin(), ans.end());
    }
};
