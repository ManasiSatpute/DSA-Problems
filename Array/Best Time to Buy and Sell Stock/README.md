# Best Time to Buy and Sell Stock

## Approach

To maximize profit, we need to find:

* The minimum stock price encountered so far (best day to buy).
* The maximum profit that can be achieved by selling on the current day.

Instead of storing the minimum price for every day, we maintain a single variable `minPrice` that tracks the lowest stock price seen so far.

For each day:

1. Update the minimum buying price.
2. Calculate the profit if the stock is sold today.
3. Update the maximum profit if the current profit is greater.

---

## Algorithm

1. Initialize:

   * `minPrice = INT_MAX`
   * `maxProfit = 0`
2. Traverse the array.
3. Update:

   * `minPrice = min(minPrice, prices[i])`
4. Calculate:

   * `profit = prices[i] - minPrice`
5. Update:

   * `maxProfit = max(maxProfit, profit)`
6. Return `maxProfit`.

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(1)       |

---
