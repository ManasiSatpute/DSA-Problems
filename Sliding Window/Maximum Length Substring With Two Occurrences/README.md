# 3090. Maximum Length Substring With Two Occurrences

**Difficulty:** Easy
**Link:** https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/

## Problem Statement

Given a string `s`, return the maximum length of a substring such that it contains at most two occurrences of each character.

## Examples

### Example 1

**Input:** `s = "bcbbbcba"`
**Output:** `4`

**Explanation:**
The following substring has a length of 4 and contains at most two occurrences of each character: `"bcbbbcba"`.

### Example 2

**Input:** `s = "aaaa"`
**Output:** `2`

**Explanation:**
The following substring has a length of 2 and contains at most two occurrences of each character: `"aaaa"`.

## Constraints

- `2 <= s.length <= 100`
- `s` consists only of lowercase English letters.

## Approach: Sliding Window

We use the classic **variable-size sliding window** technique to find the longest substring satisfying a frequency constraint.

1. Maintain a window `[left, right]` and a frequency count `freq[26]` for the characters currently inside the window.
2. Expand the window by moving `right` forward one character at a time, incrementing that character's count.
3. If the character just added now has a count greater than `2`, shrink the window from the left (incrementing `left` and decrementing counts) until its count is `2` or less again.
4. After each expansion/shrink step, the window `[left, right]` is guaranteed valid (every character appears at most twice), so update `maxLength` with the current window size `right - left + 1`.
5. Return `maxLength` once `right` has scanned the whole string.

Because `left` only moves forward and `right` only moves forward, each pointer traverses the string at most once, giving a linear-time solution.

## Complexity

- **Time Complexity:** `O(n)` — each character is added to and removed from the window at most once, where `n = s.length()`.
- **Space Complexity:** `O(1)` — the frequency array has a fixed size of 26 (lowercase English letters), independent of input size.

## Complexity Summary

| Metric | Complexity |
|--------|------------|
| Time   | `O(n)`     |
| Space  | `O(1)`     |
