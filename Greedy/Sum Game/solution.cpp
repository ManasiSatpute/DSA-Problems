class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int alice = 0, bob = 0;
        int a = 0, b = 0;
        int mid = n / 2;
        for (int i = 0; i < mid; i++) {
            if (num[i] == '?') {
                a++;
            } else {
                alice += num[i] - '0';
            }
        }
        for (int i = mid; i < n; i++) {
            if (num[i] == '?') {
                b++;
            } else {
                bob += num[i] - '0';
            }
        }

        if (2 * (alice - bob) + 9 * (a - b) == 0) {
            return false;
        }
        return true;
    }
};
