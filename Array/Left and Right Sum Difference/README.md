# LeetCode 2574 - Left and Right Sum Differences

## Problem Summary
Given an array, for each index we compute the absolute difference between:
- Sum of elements on the left
- Sum of elements on the right

We return an array of these differences for every index.

---

## Approach

This solution uses a **prefix sum technique**:

### Step 1: Compute Total Sum
We first calculate the sum of the entire array.

### Step 2: Traverse the Array
Maintain:
- `leftSum` → sum of elements before current index
- `rightSum` → remaining sum after removing current element

At each index:
- Update `rightSum`
- Compute `abs(leftSum - rightSum)`
- Update `leftSum`

---

## Intuition
Instead of recomputing left and right sums for every index (which would be O(n²)), we reuse previously computed sums to achieve O(n) time complexity.

---

## Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(1) extra space (excluding output array)

