# LeetCode 2784 - Check if Array is Good

## Problem Statement

You are given an integer array `nums`.

An array is called **good** if:

- It contains all integers from `1` to `n-1` exactly once
- The integer `n-1` appears exactly **twice**
- Where `n = nums.size()`

Return `true` if the array is good, otherwise return `false`.

---

## Example

### Example 1:
Input: nums = [1, 3, 3, 2]  
Output: true  

Explanation:
- 1 → once
- 2 → once
- 3 → twice

---

## Constraints
- 2 ≤ nums.length ≤ 100
- 1 ≤ nums[i] ≤ 1000

