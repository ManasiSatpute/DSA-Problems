# Maximum Subarray Sum

## Problem Statement

Given an integer array `nums`, find the contiguous subarray that has the largest sum and return its sum.

### Example

**Input**

```text
nums = [-2,1,-3,4,-1,2,1,-5,4]
```

**Output**

```text
6
```

**Explanation**

The subarray `[4, -1, 2, 1]` has the maximum sum `6`.

---

## Approach: Kadane's Algorithm

The brute-force approach checks all possible subarrays, resulting in a time complexity of **O(n²)** or higher.

Kadane's Algorithm optimizes this by maintaining a running sum while traversing the array.

### Key Idea

* Add the current element to `currSum`.
* Update `maxSum` if `currSum` is greater.
* If `currSum` becomes negative, reset it to `0`.
* A negative running sum cannot contribute to a larger subarray sum in the future, so it is discarded.

---

## Algorithm

1. Initialize:

   * `currSum = 0`
   * `maxSum = INT_MIN`
2. Traverse the array.
3. Add the current element to `currSum`.
4. Update `maxSum = max(maxSum, currSum)`.
5. If `currSum < 0`, reset `currSum = 0`.
6. Return `maxSum`.

---

## Dry Run

Input:

```text
[-2,1,-3,4,-1,2,1,-5,4]
```

| Element | Current Sum | Maximum Sum |
| ------- | ----------- | ----------- |
| -2      | -2          | -2          |
| Reset   | 0           | -2          |
| 1       | 1           | 1           |
| -3      | -2          | 1           |
| Reset   | 0           | 1           |
| 4       | 4           | 4           |
| -1      | 3           | 4           |
| 2       | 5           | 5           |
| 1       | 6           | 6           |
| -5      | 1           | 6           |
| 4       | 5           | 6           |

**Final Answer:** `6`

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(1)       |
