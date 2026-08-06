class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp = n;

        while(true){
            int num = temp;
            int product = 1;
            while(num > 0){
                int digit = num % 10;
                product *= digit;
                num = num / 10;
            }

            if((product % t) == 0){
                return temp;
            }
            temp++;
        }
        
    }
};
