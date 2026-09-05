# First Stable Index

A C++ solution to the "First Stable Index" problem.

## Problem

Given an integer array `nums` and an integer `k`, find the smallest index `i` such that:

```
max(nums[0..i]) - min(nums[i..n-1]) <= k
```

Return `-1` if no such index exists.

See [`problem.md`](./problem.md) for the full problem statement, examples, and constraints.

## Approach

The full implementation lives in [`solution.cpp`](./solution.cpp). Here's the idea:

1. Precompute a **prefix maximum** array `prefix[i] = max(nums[0], ..., nums[i])`,
   built left to right.
2. Precompute a **suffix minimum** array `suffix[i] = min(nums[i], ..., nums[n-1])`,
   built right to left.
3. Scan indices from left to right and return the first index `i` where
   `prefix[i] - suffix[i] <= k`.
4. If no such index is found, return `-1`.

- **Time complexity:** O(n)
- **Space complexity:** O(n)


## Complexity Summary

| Metric | Complexity |
|--------|------------|
| Time   | O(n)       |
| Space  | O(n)       |

