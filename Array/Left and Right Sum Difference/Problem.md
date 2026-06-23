# LeetCode 2574 - Left and Right Sum Differences

## Problem Statement

You are given a 0-indexed integer array `nums`.

For each index `i`, calculate the absolute difference between:

- The sum of elements to the left of `i` (left sum)
- The sum of elements to the right of `i` (right sum)

Return an array `answer` where `answer[i]` is the absolute difference between left and right sums at index `i`.

---

## Example

### Example 1:
Input: nums = [10, 4, 8, 3]  
Output: [15, 1, 11, 22]

### Explanation:
- Index 0: left = 0, right = 15 → |0 - 15| = 15  
- Index 1: left = 10, right = 11 → |10 - 11| = 1  
- Index 2: left = 14, right = 3 → |14 - 3| = 11  
- Index 3: left = 22, right = 0 → |22 - 0| = 22  

---

## Constraints
- 1 ≤ nums.length ≤ 1000
- 1 ≤ nums[i] ≤ 10⁵
