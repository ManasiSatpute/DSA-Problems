class Solution {
public:
    bool isGood(vector<int>& nums) {

        int n = nums.size();
        vector<int> freq(n, 0);

        for (int num : nums) {
            if (num >= n) return false; 
            freq[num]++;
        }

        for (int i = 1; i <= n - 2; i++) {
            if (freq[i] != 1) return false;
        }

        if (freq[n - 1] != 2) return false;

        return true;
    }
};
