class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 1;
        long long ans = 1;
        long long n = prices.size();

        for (int i =1 ; i<n ;i++){
            if(prices[i-1] - prices[i] ==1){
                count++;
            }
            else{
                count = 1;
            }
            ans+= count;
        }
        return ans;
    }
};
