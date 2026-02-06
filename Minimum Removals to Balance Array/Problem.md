# 3634. Minimum Removals to Balance Array

## Problem Statement

You are given an integer array `nums` and an integer `k`.

An array is considered **balanced** if:

```
max(nums) <= k * min(nums)
```

You may remove **any number of elements** from `nums` (but the array must not become empty).

Your task is to return the **minimum number of elements to remove** so that the remaining array becomes balanced.

> **Note:**
>
> * An array of size `1` is always balanced.

---

## Examples

### Example 1

**Input:**

```
nums = [1,2,3,4], k = 2
```

**Output:**

```
1
```

---

### Example 2

**Input:**

```
nums = [10,1,2,3], k = 1
```

**Output:**

```
3
```

---

## Constraints

* `1 <= nums.length <= 10^5`
* `1 <= nums[i] <= 10^9`
* `1 <= k <= 10^9`

---

## Goal

Remove the fewest elements such that the **maximum element** of the remaining array is at most `k` times its **minimum element**.
