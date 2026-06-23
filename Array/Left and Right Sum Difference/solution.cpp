class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int totalSum =0;
        for(int i : nums){
            totalSum += i;
        }

        int leftSum =0;
        int rightSum = totalSum;
        vector<int>ans(nums.size());

        for(int i = 0 ;i<nums.size() ;i++){
            rightSum -= nums[i];
            ans[i] = abs(leftSum - rightSum);
            leftSum += nums[i];

        }
        return ans;
        
    }
};
