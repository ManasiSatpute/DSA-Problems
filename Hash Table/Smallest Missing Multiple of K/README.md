# Smallest Missing Multiple of K

## Approach

- Store all elements of `nums` in a hash set for O(1) lookups.
- Start checking multiples of `k` beginning from `k * 1`.
- For each multiple, check if it exists in the set.
- Return the first multiple that is **not** found in the set.
- Increment the multiplier and repeat until a missing multiple is found.

## Why this works

- Multiples of `k` are checked in strictly increasing order (`k`, `2k`, `3k`, ...).
- The first one not present in `nums` is guaranteed to be the smallest missing multiple.
- Since `nums[i] <= 100`, the loop terminates quickly — at most after checking a small number of multiples.

## Complexity

- **Time:** O(n + m), where `n` is the size of `nums` and `m` is the number of multiples checked before finding the answer.
- **Space:** O(n), for storing elements of `nums` in the hash set.

## Steps

- Insert all elements of `nums` into an `unordered_set`.
- Initialize `num = 1`.
- Loop:
  - Compute `temp = k * num`.
  - If `temp` is not in the set, return `temp`.
  - Otherwise, increment `num` and continue.
