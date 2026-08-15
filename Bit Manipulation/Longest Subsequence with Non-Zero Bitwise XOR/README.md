# 3702. Longest Subsequence with Non-Zero Bitwise XOR

## Problem

Given an integer array `nums`, return the length of the longest subsequence whose bitwise XOR is non-zero. If no such subsequence exists, return `0`.

See [problem.md](./problem.md) for the full statement, examples, and constraints.

## Intuition

The key insight is that the whole array almost always gives you the best answer directly:

1. **If the XOR of the entire array is non-zero**, just take the whole array. You can't beat length `n`, and it already works.
2. **If the XOR of the entire array is zero**, you can't use all `n` elements, but you can almost always drop *one* element to fix it:
   - If any element in the array is non-zero, remove one occurrence of a non-zero element. Removing a non-zero value `x` changes the running XOR by `x` (since `x XOR x` cancels but XOR-ing out just one copy shifts the total away from `0`), so the XOR of the remaining `n - 1` elements becomes non-zero. This gives an answer of `n - 1`.
   - If **every** element is `0`, then any subsequence you pick XORs to `0` — there's no way to get a non-zero result. The answer is `0`.

So the whole problem reduces to three cases based on:
- The XOR of all elements (`result`)
- Whether the array contains at least one non-zero element (`flag`)

## Approach

1. Iterate through `nums` once, XOR-ing every value into `result`, and track whether any element is non-zero (`flag` stays `true` only if all elements seen so far are `0`).
2. After the loop:
   - If `result != 0`: the full array already XORs to something non-zero → return `n`.
   - Else if `flag == true` (meaning every element is `0`): no subsequence can ever be non-zero → return `0`.
   - Otherwise: the full array XORs to `0` but contains at least one non-zero value → drop one element → return `n - 1`.

This is a single linear pass with O(1) extra space.

## Complexity

- **Time:** O(n) — one pass through `nums`.
- **Space:** O(1) — only a couple of scalar variables are used.

## Walkthrough of Examples

### Example 1: `nums = [1,2,3]`
- `1 XOR 2 XOR 3 = 0`, so the full array XORs to zero.
- Not all elements are zero (`flag = false`).
- Answer: `n - 1 = 2` (e.g., `[2,3]` → `2 XOR 3 = 1 ≠ 0`). 

### Example 2: `nums = [2,3,4]`
- `2 XOR 3 XOR 4 = 5 ≠ 0`.
- Answer: `n = 3`. 

### Edge case: `nums = [0,0,0]`
- `result = 0`, and every element is `0` (`flag = true`).
- Answer: `0`, since no subsequence can ever have a non-zero XOR.

## Code

See [solution.cpp](./solution.cpp) for the full C++ implementation.
