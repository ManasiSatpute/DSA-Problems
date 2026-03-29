# Count Special Triplets (LeetCode 3583)

## Problem Statement

You are given an integer array `nums`.

A **special triplet** is defined as a triplet of indices `(i, j, k)` such that:

- `0 ≤ i < j < k < n`, where `n = nums.length`
- `nums[i] == nums[j] * 2`
- `nums[k] == nums[j] * 2`

Return the **total number of special triplets** in the array.

Since the answer may be large, return it **modulo 10^9 + 7**.

---

## Example

### Example 1

**Input**

```
nums = [6, 3, 6]
```

**Output**

```
1
```

**Explanation**

The only special triplet is `(i, j, k) = (0, 1, 2)`.

- `nums[0] = 6`
- `nums[1] = 3`
- `nums[2] = 6`

Since:

```
nums[0] = nums[1] * 2 = 3 * 2 = 6
nums[2] = nums[1] * 2 = 3 * 2 = 6
```

the triplet `(0, 1, 2)` satisfies the conditions.

---

## Constraints

- `1 ≤ nums.length ≤ 10^5`
- `0 ≤ nums[i] ≤ 10^5`
