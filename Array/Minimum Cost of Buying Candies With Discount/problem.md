# LeetCode 2144 - Minimum Cost of Buying Candies With Discount

## Problem Statement

You are given a 0-indexed integer array `cost` where `cost[i]` represents the cost of the ith candy.

In a candy store, you can buy candies with the following discount:
- You must buy 2 candies and get the 3rd cheapest (among those 3) for free.

Return the minimum cost you need to spend to buy all the candies.

---

## Example

### Example 1:
Input: cost = [1,2,3]  
Output: 5  
Explanation: Buy 2 and 3, get 1 free (after sorting logic applied differently depending on choice)

---

## Constraints
- 1 ≤ cost.length ≤ 100
- 1 ≤ cost[i] ≤ 1000
