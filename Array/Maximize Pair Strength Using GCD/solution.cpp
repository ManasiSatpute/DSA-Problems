class Solution {
public:
    int gcd (int a , int b){
        if(b == 0){
            return a;
        }

        return gcd(b , a %b);
    }
    long long maxPairStrength(vector<int>& nums) {
        long long ans=0;
        for(int i =0 ;i<nums.size() ;i++){
            for(int j = i+1 ; j<nums.size() ;j++){
                long long a = nums[i];
                long long b = nums[j];

                long long mult = a * b;
                long long g = gcd(a , b);
                long long sol = mult / (g*g);

                ans = max(ans ,sol );
            }
        }
        return ans;
    }
};
