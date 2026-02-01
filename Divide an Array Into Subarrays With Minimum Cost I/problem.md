# 3010. Divide an Array Into Subarrays With Minimum Cost I

## Problem Statement

You are given an integer array `nums` of length `n`.

The **cost** of an array is defined as the value of its **first element**.

* Example: cost of `[1, 2, 3]` is `1`
* Example: cost of `[3, 4, 1]` is `3`

Your task is to divide `nums` into **3 disjoint contiguous subarrays** such that:

* Every element belongs to exactly one subarray
* The sum of the **costs** of the three subarrays is minimized

Return the **minimum possible sum** of the costs.

---

## Examples

### Example 1

**Input:**

```
nums = [1,2,3,4]
```

**Output:**

```
6
```

**Explanation:**
One optimal division is `[1]`, `[2]`, `[3,4]`.
Cost = `1 + 2 + 3 = 6`.

---

### Example 2

**Input:**

```
nums = [5,3,4,2,1]
```

**Output:**

```
9
```

**Explanation:**
Choose the smallest two values after the first element as starting points of the remaining subarrays.

---

## Constraints

* `3 <= nums.length <= 50`
* `1 <= nums[i] <= 50`

---

## Goal

Find an optimal way to split the array into three contiguous subarrays such that the **sum of their first elements is minimized**.
