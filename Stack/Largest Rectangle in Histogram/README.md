# Largest Rectangle in Histogram

## Problem

LeetCode 84 - Largest Rectangle in Histogram

Given the heights of histogram bars, find the largest rectangle that can be formed.

---

## Idea

For every bar, determine:

- Nearest Smaller element on the Left
- Nearest Smaller element on the Right

These two indices give the maximum width over which the current bar can extend.

Formula:

Width = NSR - NSL - 1

Area = Height × Width

Calculate the area for every bar and keep track of the maximum.

---

## Algorithm

1. Find NSL using a monotonic increasing stack.
2. Clear the stack.
3. Find NSR using the same technique.
4. Calculate the width for every bar.
5. Compute the area.
6. Return the maximum area.

---

## Complexity

Time Complexity: **O(n)**

Each element is pushed and popped from the stack at most once.

Space Complexity: **O(n)**

Extra space is used for:
- NSL array
- NSR array
- Stack

---

## Example

Input

```text
heights = [2,1,5,6,2,3]
```

NSL

```text
[-1,-1,1,2,1,4]
```

NSR

```text
[1,6,4,4,6,6]
```

Maximum Area

```text
10
```
