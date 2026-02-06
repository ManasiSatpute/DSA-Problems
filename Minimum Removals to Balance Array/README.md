# Minimum Removals to Balance Array (LeetCode 3634)

## Overview

This repository contains an efficient solution for **LeetCode 3634 – Minimum Removals to Balance Array**.

The objective is to remove the minimum number of elements so that the remaining array satisfies:

```
max <= k * min
```

---

## Key Insight

* If the array is **sorted**, the minimum element is on the left and the maximum on the right
* We want the **largest contiguous subarray** where:

```
nums[j] <= k * nums[i]
```

* Keeping the longest valid subarray minimizes removals

This naturally leads to a **two-pointer / sliding window** approach.

---

## Algorithm

1. Sort the array
2. Use two pointers `i` and `j` to maintain a valid window
3. Expand `j` and shrink `i` until the balance condition holds
4. Track the maximum valid window size
5. Answer = `n - maxWindowSize`

---

## Complexity Analysis

* **Time Complexity:** `O(n log n)` (sorting)
* **Space Complexity:** `O(1)`

---

## Project Structure

```
.
├── problem.md     # Problem statement and constraints
├── solution.cpp   # C++ implementation
└── README.md      # Explanation and approach
```

---

## Key Takeaway

> Keeping the largest balanced subarray ensures the minimum number of removals.

---

**LeetCode Link:** [https://leetcode.com/problems/minimum-removals-to-balance-array/](https://leetcode.com/problems/minimum-removals-to-balance-array/)

Happy Coding! 💻✨
