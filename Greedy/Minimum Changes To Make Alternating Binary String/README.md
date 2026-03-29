# Minimum Changes To Make Alternating Binary String

## Overview

This repository contains a C++ implementation for solving the **Minimum Changes To Make Alternating Binary String** problem.

An alternating string is a binary string where no two adjacent characters are the same.

Examples of alternating strings:
- `0101`
- `1010`

Examples of non-alternating strings:
- `001`
- `1110`

The goal is to determine the **minimum number of operations** required to transform the string into an alternating string.

---

## Approach

There are only **two possible alternating patterns** for a binary string:

1. Starting with `0`
   ```
   010101...
   ```

2. Starting with `1`
   ```
   101010...
   ```

Steps used in the algorithm:

1. Traverse the string.
2. Compare each character with the expected character for both patterns.
3. Count mismatches for both cases.
4. Return the minimum number of mismatches.

---

## Complexity Analysis

Time Complexity:
```
O(n)
```

Space Complexity:
```
O(1)
```

---

## Concepts Used

- String traversal
- Pattern comparison
- Greedy approach
- Minimum operation calculation

---
##Tags: 
Greedy, String
---

## Conclusion

By evaluating both possible alternating patterns, we can efficiently determine the minimum number of changes required to make the binary string alternating.

