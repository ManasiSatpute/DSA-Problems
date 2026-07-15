class Solution {
public:
    int gcd(int divi, int div) {
        int rem = divi % div;

        if (rem > 0) {
            return gcd(div, rem);
        }
        else {
            return div;
        }
    }

    int gcdOfOddEvenSums(int n) {
        int sumOdd = n * n;
        int sumEven = n * (n + 1);

        int divi = max(sumOdd, sumEven);
        int div = min(sumOdd, sumEven);

        return gcd(divi, div);
    }
};
