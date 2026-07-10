# LeetCode 322 - Coin Change

## Problem Statement

You are given an integer array `coins` representing coins of different denominations and an integer `amount` representing a total amount of money.

Return the **fewest number of coins** that you need to make up that amount. If it is not possible to make up the amount using the given coins, return `-1`.

You may use each coin an **unlimited number of times**.

### Examples

**Example 1**

```text
Input:
coins = [1,2,5]
amount = 11

Output:
3

Explanation:
11 = 5 + 5 + 1
```

**Example 2**

```text
Input:
coins = [2]
amount = 3

Output:
-1
```

**Example 3**

```text
Input:
coins = [1]
amount = 0

Output:
0
```

## Constraints

* `1 <= coins.length <= 12`
* `1 <= coins[i] <= 2^31 - 1`
* `0 <= amount <= 10^4`
