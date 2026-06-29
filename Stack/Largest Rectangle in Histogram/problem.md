# LeetCode 84 - Largest Rectangle in Histogram

## Problem Statement

You are given an array `heights` where each element represents the height of a histogram bar. Each bar has a width of 1.

Find the area of the largest rectangle that can be formed inside the histogram.

### Example 1

Input:
heights = [2,1,5,6,2,3]

Output:
10

Explanation:
The rectangle formed using bars with heights 5 and 6 has width 2.
Area = 5 × 2 = 10.

### Example 2

Input:
heights = [2,4]

Output:
4

## Constraints

- 1 <= heights.length <= 10^5
- 0 <= heights[i] <= 10^4

## Approach

The brute force approach checks every possible rectangle and takes O(n²) time.

A better approach is to use a stack.

For every bar we find:
- Nearest Smaller to Left (NSL)
- Nearest Smaller to Right (NSR)

These tell us how far the current bar can extend.

Width = NSR - NSL - 1

Area = Height × Width

Finally, return the maximum area.
