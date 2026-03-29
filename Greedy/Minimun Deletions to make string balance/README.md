# Minimum Deletions to Make String Balanced (LeetCode 1653)

## Overview

This repository provides an efficient solution for **LeetCode 1653 – Minimum Deletions to Make String Balanced**.

The task is to remove the minimum number of characters so that **no `'b'` appears before an `'a'`** in the string.

---

## Intuition

While traversing the string from left to right:

* Keep track of how many `'b'` characters have appeared so far
* When an `'a'` is encountered after some `'b'`s, we have two choices:

  1. Delete this `'a'`
  2. Delete all previous `'b'`s

We choose the option with **minimum deletions** at every step.

---

## Algorithm

1. Initialize:

   * `countB` → number of `'b'` seen so far
   * `deletions` → minimum deletions required
2. Traverse the string:

   * If character is `'b'`, increment `countB`
   * If character is `'a'`, update:

     ```
     deletions = min(deletions + 1, countB)
     ```
3. Return `deletions`

---

## Complexity Analysis

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

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

> Greedy decisions at each step lead to a globally optimal solution.

---

**LeetCode Link:** [https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/](https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/)
