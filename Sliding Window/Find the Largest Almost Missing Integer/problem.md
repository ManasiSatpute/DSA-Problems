# 3471. Find the Largest Almost Missing Integer


**Link:** https://leetcode.com/problems/find-the-largest-almost-missing-integer/

## Problem Statement

You are given an integer array `nums` and a positive integer `k`.

An integer `x` is said to be **almost missing** if `x` appears in **exactly one** subarray of size `k` within `nums`.

Return *the largest **almost missing** integer from* `nums`. *If no such integer exists, return* `-1`.

A **subarray** is a contiguous sequence of elements within an array.

## Examples

### Example 1
```
Input: nums = [3,9,2,1,7], k = 3
Output: 7
Explanation:
- 1 appears in 2 subarrays of size 3: [9,2,1], [2,1,7].
- 2 appears in 3 subarrays of size 3: [3,9,2], [9,2,1], [2,1,7].
- 3 appears in 1 subarray of size 3: [3,9,2].
- 7 appears in 1 subarray of size 3: [2,1,7].
- 9 appears in 2 subarrays of size 3: [3,9,2], [9,2,1].
We return 7 since it is the largest integer that appears in exactly one subarray of size k.
```

### Example 2
```
Input: nums = [3,9,7,2,1,7], k = 4
Output: 7
Explanation:
- 1 appears in 3 subarrays of size 4: [3,9,7,2], [9,7,2,1], [7,2,1,7].
- 2 appears in 3 subarrays of size 4: [3,9,7,2], [9,7,2,1], [7,2,1,7].
- 3 appears in 1 subarray of size 4: [3,9,7,2].
- 7 appears in 3 subarrays of size 4: [3,9,7,2], [9,7,2,1], [7,2,1,7].
- 9 appears in 3 subarrays of size 4: [3,9,7,2], [9,7,2,1], [7,2,1,7].
We return 3 since it is the largest and only integer that appears in exactly one subarray of size k.
```
*(Note: for this input the correct output is 3.)*

### Example 3
```
Input: nums = [0,0], k = 1
Output: -1
Explanation: No integer appears in exactly one subarray of size k.
```

## Constraints

- `1 <= nums.length <= 50`
- `0 <= nums[i] <= 50`
- `1 <= k <= nums.length`
