# 1980. Find Unique Binary String

## Overview

This repository contains a C++ solution for **LeetCode Problem 1980 – Find Unique Binary String**.

You are given `n` unique binary strings where each string has length `n`.  
The goal is to return **any binary string of length `n` that does not appear in the given array**.

---

## Key Idea

The solution uses **Cantor's Diagonalization Technique**.

This technique guarantees the construction of a new binary string that differs from every string in the input array at **at least one position**.

---

## Approach

1. Let `n` be the number of binary strings.
2. Iterate through the array from `0` to `n-1`.
3. For each index `i`:
   - Look at the `i-th` character of the `i-th` string.
   - Flip the bit:
     - `'0' → '1'`
     - `'1' → '0'`
4. Append the flipped bit to the result string.

This ensures that:
- The resulting string differs from `nums[i]` at position `i`.
- Therefore it **cannot be equal to any string in the array**.

---

## Example

Input:

```
nums = ["01","10"]
```

Process:

```
nums[0][0] = '0' → flip → '1'
nums[1][1] = '0' → flip → '1'
```

Result:

```
"11"
```

This string does not exist in the array.

---

## Complexity Analysis

### Time Complexity

```
O(n)
```

Only one traversal of the array is required.

### Space Complexity

```
O(n)
```

For storing the resulting binary string.

---

## Concepts Used

- Cantor's Diagonalization
- String manipulation
- Greedy construction

---

## Conclusion

By flipping the diagonal bits of the input strings, we construct a binary string that **guarantees uniqueness**. This elegant technique provides an optimal `O(n)` solution to the problem.
