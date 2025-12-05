//Leetcode 3432

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int start = 0;       
        int count =0;
        int end = start +1;
        
       
        while(end<n){
            int lsum =0;
            int rsum =0;

            for(int i =start ; i<end ;i++ ){               
                lsum += nums[i];

            }
            for(int j = end ; j< n ;j++){
                rsum +=  nums[j];
            }
            if((rsum - lsum) % 2==0){
                count++;
            }

            end++;
        }
        return count;

    }
};
