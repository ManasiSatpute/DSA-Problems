
# 3345. Smallest Divisible Digit Product I

## Problem

Given two integers `n` and `t`, find the smallest number greater than or equal to `n` whose digit product is divisible by `t`.

## Approach

The solution checks every number starting from `n` until it finds a number satisfying the required condition.

For each candidate number:

1. Store the current number in a temporary variable.
2. Extract each digit using the modulo operator (`% 10`).
3. Multiply all the extracted digits to calculate the digit product.
4. Remove the last digit using integer division by `10`.
5. Check whether the digit product is divisible by `t`.
6. If it is divisible, return the current number.
7. Otherwise, increment the number and repeat the process.

### Important Observation

If any digit of the number is `0`, the entire digit product becomes `0`.

Since `0` is divisible by every positive integer, such a number automatically satisfies the condition.

## Example Walkthrough

Consider:

`n = 15, t = 3`

Start checking from `15`:

- `15` → digit product = `1 × 5 = 5` → not divisible by `3`
- `16` → digit product = `1 × 6 = 6` → divisible by `3`

Therefore, the answer is:

`16`

## Complexity Analysis

Let `k` be the number of digits in a candidate number and `x` be the number of candidates checked before finding the answer.

### Time Complexity

`O(x × k)`

For each candidate number, every digit is processed once.

Since the constraints are very small (`n <= 100`), this brute-force approach is efficient.

### Space Complexity

`O(1)`

Only a constant amount of extra space is used.

## Solution

The implementation follows a straightforward brute-force strategy: start from `n`, calculate the product of its digits, and keep incrementing the number until the product is divisible by `t`.
