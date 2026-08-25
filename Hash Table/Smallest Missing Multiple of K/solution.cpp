class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin() , nums.end());
        int num = 1;

        while(true){
            int temp = k * num;

            if(s.count(temp) == 0){
                return temp;
            }
            num++;
        }
    }
};
