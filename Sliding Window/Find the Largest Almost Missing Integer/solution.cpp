class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int , int>count;

        for(int i =0 ;i<= n - k ;i++){
            unordered_set<int>subArr;
            for(int j = i ;j<i + k ; j++){
                subArr.insert(nums[j]);
            }

            for(int x : subArr){
                count[x]++;
            }
        }

        int largest = -1;
        for(const auto &num :count){
            int number = num.first;
            int freq = num.second;

            if(freq == 1){
                largest = max(number , largest);
            }
        }
        return largest;
    }
};
