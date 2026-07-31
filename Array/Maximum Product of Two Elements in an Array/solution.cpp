class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=0;
        int secondLarge=0;
        
            for(int i =0 ;i<nums.size() ;i++){
                if(nums[i] >=largest){
                    secondLarge = largest;
                    largest = nums[i];
                }
                else if(nums[i] >secondLarge && nums[i] < largest){
                    secondLarge = nums[i];
                }
            }
        
       return (largest -1 ) * (secondLarge-1);
    }
};
