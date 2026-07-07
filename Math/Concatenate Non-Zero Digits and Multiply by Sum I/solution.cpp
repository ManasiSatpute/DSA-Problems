class Solution {
public:
    long long sumAndMultiply(int n) {
    vector<int>temp;
    long long sum =0;
       while(n > 0){
        int rem = n % 10;
        if(rem != 0){
            temp.push_back(rem);
            sum += rem;

        }
        n = n / 10;
       }
       long long result =0;
       for(int i =temp.size()-1 ;i>=0 ;i--){
        result = result * 10 + temp[i];
       }

       return result * sum;

    }
};
