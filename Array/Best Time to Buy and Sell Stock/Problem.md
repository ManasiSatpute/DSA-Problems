# Best Time to Buy and Sell Stock

## Problem Statement

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i-th` day.

You want to maximize your profit by choosing:

* A single day to buy one stock.
* A different future day to sell that stock.

Return the maximum profit you can achieve from this transaction. If no profit can be achieved, return `0`.

### Example 1

**Input**

```text
prices = [7,1,5,3,6,4]
```

**Output**

```text
5
```

**Explanation**

Buy on day 2 (price = 1) and sell on day 5 (price = 6).

Profit = 6 - 1 = 5

### Example 2

**Input**

```text
prices = [7,6,4,3,1]
```

**Output**

```text
0
```

**Explanation**

No profitable transaction is possible.

## Constraints

* `1 <= prices.length <= 10^5`
* `0 <= prices[i] <= 10^4`
