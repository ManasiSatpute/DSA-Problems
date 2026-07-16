# LeetCode 3867 - Sum of Prefix GCD Pairs

## Problem Statement

You are given an integer array `nums` of length `n`.

Construct an array `prefixGcd` where for each index `i`:

- Let `mxi = max(nums[0], nums[1], ..., nums[i])`.
- `prefixGcd[i] = gcd(nums[i], mxi)`.

After constructing `prefixGcd`:

1. Sort `prefixGcd` in non-decreasing order.
2. Form pairs by taking the smallest unpaired element and the largest unpaired element.
3. Repeat until no more pairs can be formed.
4. Compute the GCD of every pair.
5. If `n` is odd, ignore the middle element.

Return the sum of the GCDs of all formed pairs.

## Example

**Input**

```text
nums = [2, 5, 4]
```

**Process**

```text
Maximums so far : [2, 5, 5]
prefixGcd       : [2, 5, 1]

Sorted          : [1, 2, 5]

Pairs:
(1, 5) -> gcd = 1

Middle element (2) is ignored.
```

**Output**

```text
1
```

## Constraints

- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^9`
