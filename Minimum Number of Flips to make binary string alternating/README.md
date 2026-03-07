# 1888. Minimum Number of Flips to Make the Binary String Alternating

## Overview

This repository contains a C++ solution for **LeetCode Problem 1888**.

The goal is to determine the **minimum number of flip operations** required to convert a binary string into an **alternating string**, while also allowing **cyclic rotations**.

Two operations are allowed:

1. Move the first character to the end of the string (rotation).
2. Flip a character (`0 ↔ 1`).

---

## Key Idea

Since rotations are allowed, any rotation of the string can be considered.

To simulate rotations efficiently:
- Concatenate the string with itself.

Example:

```
s = "1011"
ss = "10111011"
```

Now any rotation of length `n` becomes a substring of `ss`.

---

## Alternating Patterns

There are only two valid alternating patterns:

Pattern 1:
```
010101...
```

Pattern 2:
```
101010...
```

For every window of length `n` in `ss`:
- Compare with both patterns
- Count mismatches
- Keep the minimum flips required

---

## Algorithm

1. Duplicate the string (`ss = s + s`).
2. Generate two alternating patterns.
3. Use a **sliding window of size n**.
4. Count mismatches with both patterns.
5. Track the minimum number of flips required.

---

## Complexity Analysis

### Time Complexity
```
O(n)
```

### Space Complexity
```
O(n)
```

---

## Concepts Used

- Sliding Window
- String Manipulation
- Greedy Comparison
- Pattern Matching

---

## Conclusion

By doubling the string and applying a sliding window with alternating pattern comparisons, we can efficiently compute the minimum flips required even when rotations are allowed.
