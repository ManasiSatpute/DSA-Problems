#include <cmath>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        // Using quadratic formula:
        // k = (sqrt(1 + 8n) - 1) / 2
        return (int)((sqrt(1 + 8.0 * n) - 1) / 2);
    }
};
