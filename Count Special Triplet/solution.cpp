class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int64_t> prefix (nums.size()), suffix (nums.size());
        for (int i = 0; i < nums.size(); i++) {
            const auto& num = nums[i];
            if (freq.contains(num*2)) prefix[i] += freq[num*2];
            freq[num]++;
        }
        freq.clear();
        for (int i = nums.size() - 1; i >= 0; i--) {
            const auto& num = nums[i];
            if (freq.contains(num*2)) suffix[i] += freq[num*2];
            freq[num]++;
        }

        const int modulo = 1000000000 + 7;
        int64_t result = 0;
        for (int i = 0; i < nums.size(); i++) {
            result += prefix[i] * suffix[i];
            result %= modulo;
        }
        return result;
    }
};
