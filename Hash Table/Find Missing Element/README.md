# Find Missing Elements

## Overview

This solution finds all integers missing from the continuous range between the smallest and largest values present in the given array.

The approach uses an `unordered_set` to store all the elements of the array. It then determines the minimum and maximum values and checks every integer in that range to identify which values are missing.

## Approach

1. Store all elements of `nums` in an `unordered_set`.
2. Find the smallest and largest values present in the array.
3. Iterate from the smallest value to the largest value.
4. For each value, check whether it exists in the `unordered_set`.
5. If the value does not exist, add it to the result.
6. Since the values are checked in increasing order, the resulting list is already sorted.

## Complexity Analysis

Let:

* `n` = number of elements in `nums`
* `r` = difference between the largest and smallest values

### Time Complexity

**O(n + r)** average case

* Inserting elements into the `unordered_set`: `O(n)` average
* Finding minimum and maximum: `O(n)`
* Checking the complete range: `O(r)` average

### Space Complexity

**O(n)**

The `unordered_set` stores all elements from the input array.

## Key Concepts

* `unordered_set`
* Hashing
* Finding minimum and maximum elements
* Range traversal
* Array traversal

## Notes

The result does not need to be explicitly sorted because the solution checks the numbers from the smallest value to the largest value in increasing order.

## Problem Link

[LeetCode - Find Missing Elements](https://leetcode.com/)
