# Coin Change (LeetCode 322)

## Approach

This problem can be solved using **Dynamic Programming (Bottom-Up)**.

### Idea

Let `dp[i]` represent the minimum number of coins required to make the amount `i`.

* Initialize every value with `amount + 1`, which acts as an impossible value.
* Set `dp[0] = 0` because zero coins are required to make amount `0`.
* For every amount from `1` to `amount`, try every coin.
* If the current coin can contribute to the amount, update the answer using the recurrence:

`dp[i] = min(dp[i], dp[i - coin] + 1)`

After filling the DP array:

* If `dp[amount]` is still `amount + 1`, the amount cannot be formed, so return `-1`.
* Otherwise, return `dp[amount]`.

## Algorithm

1. Create a DP array of size `amount + 1`.
2. Initialize every element with `amount + 1`.
3. Set `dp[0] = 0`.
4. Iterate through each amount from `1` to `amount`.
5. For each coin:

   * If the coin value is less than or equal to the current amount, update the DP value using the minimum of the current value and the value obtained by including the coin.
6. After processing all amounts, return `-1` if the target amount is unreachable; otherwise, return the minimum number of coins.

## Complexity Analysis

* **Time Complexity:** `O(amount × number_of_coins)`
* **Space Complexity:** `O(amount)`
