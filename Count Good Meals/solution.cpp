#include <iostream>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        const int MOD = 1e9 + 7;
        unordered_map<int, int> freq;
        int count = 0;

        for (int d : deliciousness) {
            // Check all powers of two up to 2^21
            for (int i = 0; i <= 21; i++) {
                int power = 1 << i;
                int needed = power - d;

                if (freq.count(needed)) {
                    count = (count + freq[needed]) % MOD;
                }
            }
            // Store current deliciousness
            freq[d]++;
        }

        return count;
    }
};
