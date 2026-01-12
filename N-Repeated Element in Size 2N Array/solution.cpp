class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int , int>freq;
        int n = nums.size()/2;

        for(int x : nums){
            freq[x] ++;
            if(freq[x]== n){
                return x;
            }
        }
        return -1;
        
    }
};
