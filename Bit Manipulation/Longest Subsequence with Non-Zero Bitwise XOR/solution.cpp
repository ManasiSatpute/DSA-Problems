class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        bool flag = true;

        for(int i =0 ;i<n ;i++){
            result ^= nums[i];

            if(nums[i] != 0){
                flag = false;
            }
        }
        if(result != 0){
            return n;
        }
        if(flag == true){
            return 0;
        }
        return n-1;
    }
};
