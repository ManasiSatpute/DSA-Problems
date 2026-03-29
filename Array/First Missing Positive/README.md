# First Missing Positive

## Problem

Given an unsorted integer array `nums`, return the **smallest positive integer** that is **missing from the array**.

The goal is to identify the first positive number that does not appear in the array.

---

## Approach

The solution follows these steps:

1. **Sort the array** so that numbers are arranged in increasing order.
2. Initialize a variable `num = 1`, which represents the smallest positive integer we expect to find.
3. Traverse the sorted array:
   - If the current element equals `num`, increment `num`.
   - If the current element is greater than `num`, stop the loop because the missing number is found.
4. Return `num` as the smallest missing positive integer.

This works because after sorting, positive numbers appear in order, making it easy to track the smallest missing value.

---

## Algorithm

1. Sort the given array.
2. Initialize `num = 1`.
3. Iterate through the array:
   - If `nums[i] == num`, increment `num`.
   - If `nums[i] > num`, break the loop.
4. Return `num`.

---

## Time Complexity

- **O(n log n)** due to sorting.

## Space Complexity

- **O(1)** (constant extra space).

---


## Example

Input:
```
nums = [3,4,-1,1]
```

Sorted array:
```
[-1,1,3,4]
```

Traversal:
- `1` found → expect `2`
- `3` > `2` → missing number is **2**

Output:
```
2
```

---

## Summary

- Sorting simplifies the problem.
- Track the smallest expected positive number.
- Return the first missing value encountered during traversal.
