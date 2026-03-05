#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < n; i++) {

            char expected1;
            char expected2;

            if(i % 2 == 0){
                expected1 = '0';
                expected2 = '1';
            }
            else{
                expected1 = '1';
                expected2 = '0';
            }

            if(s[i] != expected1){
                count1++;
            }

            if(s[i] != expected2){
                count2++;
            }
        }

        return min(count1, count2);
    }
};
