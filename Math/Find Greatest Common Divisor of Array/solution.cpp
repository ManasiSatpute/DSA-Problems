class Solution {
public:
    int gcd(int divi , int div){
        int rem = divi % div;
        if(rem > 0){
            return gcd(div , rem);
        }
        return div;
    }
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i = 0 ;i<nums.size() ;i++){
            if(nums[i] > maxi ){
                maxi = nums[i];
            }
            if(nums[i] < mini){
                mini = nums[i];
            }
        }

        return gcd(maxi , mini);
        
    }
};
