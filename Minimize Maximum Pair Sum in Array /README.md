# Minimize Maximum Pair Sum in Array (LeetCode 1877)

##  Overview

This repository contains a clean and efficient solution to **LeetCode Problem 1877 – Minimize Maximum Pair Sum in Array**.

The goal is to pair elements in such a way that the **largest pair sum** is as small as possible.

---

## Strategy

The optimal approach is **greedy**:

* Sort the array
* Pair the **smallest** element with the **largest** element
* Track the maximum sum among all formed pairs

This balances large values with small ones and prevents any pair from dominating the maximum.

---

## Algorithm Steps

1. Sort the array `nums`
2. Initialize two pointers:

   * `start` at the beginning
   * `end` at the end
3. Add `nums[start] + nums[end]` to a list of pair sums
4. Move pointers inward
5. Return the maximum value from the pair sums

---

## Complexity Analysis

* **Time Complexity:** `O(n log n)` (sorting)
* **Space Complexity:** `O(n)` (to store pair sums)

---

## Project Structure

```
.
├── problem.md     # Problem statement and examples
├── solution.cpp   # C++ implementation
└── README.md      # Explanation and approach
```

---

## Key Takeaway

> Pairing the smallest and largest numbers together minimizes the maximum pair sum.

---

Happy Coding!
