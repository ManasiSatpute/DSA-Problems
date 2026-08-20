#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());

    int count = 0;
    int left = 0;
    int right = 0;

    while (right < a.size()) {
        if (a[right] - a[left] <= 1) {
            int currentSize = right - left + 1;
            count = max(count, currentSize);
            right++;
        }
        else {
            left++;
        }
    }

    return count;
}
