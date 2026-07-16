class Solution {
public:
    long long gcd(int divi, int div) {
        int rem = divi % div;
        if (rem > 0) {
            return gcd(div, rem);
        }
        return div;
    }

    long long gcdSum(vector<int>& nums) {
        vector<int> ans;

        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            ans.push_back(gcd(mx, nums[i]));
        }

        sort(ans.begin(), ans.end());

        long long sum = 0;
        int left = 0;
        int right = ans.size() - 1;

        while (left < right) {
            sum += gcd(ans[left], ans[right]);
            left++;
            right--;
        }

        return sum;
    }
};
