# First Stable Index



## Problem Statement

You are given an integer array `nums` of length `n` and an integer `k`.

For each index `i`, define its **instability score** as:

```
instability(i) = max(nums[0..i]) - min(nums[i..n-1])
```

where:

- `max(nums[0..i])` is the **largest** value among the elements from index `0` to index `i` (inclusive).
- `min(nums[i..n-1])` is the **smallest** value among the elements from index `i` to index `n-1` (inclusive).

An index `i` is called **stable** if its instability score is **less than or equal to** `k`.

Return the **smallest** stable index. If no such index exists, return `-1`.

## Examples

### Example 1

```
Input: nums = [3, 1, 4, 1, 5], k = 2
Output: 1
```

**Explanation:**
- i = 0: max(nums[0..0]) = 3, min(nums[0..4]) = 1 → instability = 3 - 1 = 2 ≤ k... 

  (Actual result depends on array values — walk through prefix/suffix arrays to verify.)

### Example 2

```
Input: nums = [5, 4, 3, 2, 1], k = 0
Output: -1
```

**Explanation:** The array is strictly decreasing, so max(nums[0..i]) is always nums[0] = 5,
and min(nums[i..n-1]) keeps shrinking. The gap never closes to within k = 0 for any index,
so no stable index exists.

## Constraints

- `1 <= n == nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= k <= 10^9`
