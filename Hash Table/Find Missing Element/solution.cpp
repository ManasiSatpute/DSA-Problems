class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>freq;
        vector<int>ans;
        int small = INT_MAX;
        int large = INT_MIN;
        for(int x : nums){
            freq.insert(x);
            small = min(small , x);
            large = max(large , x);
        }
        
        for(int i = small ; i<= large ;i++){
            if(freq.find(i) == freq.end()){
                ans.push_back(i);
            }
        }

        return ans;


    }
};
