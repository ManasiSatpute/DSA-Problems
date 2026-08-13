#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int maxBudget = -1;

    for (int i = 0; i < keyboards.size(); i++) {
        for (int j = 0; j < drives.size(); j++) {
            int cost = keyboards[i] + drives[j];

            if (cost <= b) {
                maxBudget = max(maxBudget, cost);
            }
        }
    }

    return maxBudget;
}
