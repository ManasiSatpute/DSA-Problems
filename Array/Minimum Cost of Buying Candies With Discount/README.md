# LeetCode 2144 - Minimum Cost of Buying Candies With Discount

## Problem Overview
You are given candy costs, and a discount rule:
- Buy 2 candies → get 1 (cheapest among them) free

Goal: Minimize total cost.

---

## Approach

### Step 1: Sort in descending order
We want expensive candies to be considered first.

### Step 2: Group in sets of 3
For every 3 candies:
- First 2 are paid
- 3rd is free

### Step 3: Greedy selection
Skip every 3rd item in sorted array.

---

## Complexity Analysis
- Time Complexity: **O(n log n)** (sorting)
- Space Complexity: **O(1)** extra space

