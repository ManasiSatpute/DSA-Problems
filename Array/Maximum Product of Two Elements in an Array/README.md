# LeetCode 1464 - Maximum Product of Two Elements in an Array

## Problem
Given an integer array `nums`, choose two different indices `i` and `j` such that the value of:

(nums[i] - 1) * (nums[j] - 1)

is maximized.

Return the maximum possible product.

---

## Approach
- Traverse the array only once.
- Keep track of:
  - Largest element seen so far.
  - Second largest element seen so far.
- Whenever a larger element is found:
  - Update the second largest.
  - Update the largest.
- Otherwise, update the second largest if the current element is greater than it.
- Finally compute:

```
(largest - 1) * (secondLargest - 1)
```

---

## Time Complexity

- **O(n)** — Single traversal of the array.

## Space Complexity

- **O(1)** — Only two variables are used.
