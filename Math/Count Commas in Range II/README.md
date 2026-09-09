# 3871. Count Commas in Range II

## Problem

Given an integer `n`, count the total number of commas used when writing every integer from `1` to `n` in standard number formatting.

A comma is inserted after every three digits from the right.

### Example

For `n = 1002`:

```text
1,000 → 1 comma
1,001 → 1 comma
1,002 → 1 comma
```

Therefore:

```text
Answer = 3
```

For `n = 998`, no number contains a comma, so the answer is `0`.

## Approach

Instead of checking every number individually, divide the numbers into ranges based on how many commas they contain.

| Range                                     | Commas |
| ----------------------------------------- | -----: |
| `1 - 999`                                 |      0 |
| `1,000 - 999,999`                         |      1 |
| `1,000,000 - 999,999,999`                 |      2 |
| `1,000,000,000 - 999,999,999,999`         |      3 |
| `1,000,000,000,000 - 999,999,999,999,999` |      4 |
| `1,000,000,000,000,000 - n`               |      5 |

For each range:

```text
number of integers × commas per integer
```

is added to the answer.

The constraints have `n <= 10^15`, so at most 5 commas are possible.

## Algorithm

1. Initialize `ans = 0`.
2. If `n >= 1000`, count numbers from `1000` to `min(n, 999999)` and multiply by `1`.
3. If `n >= 1000000`, count numbers from `1000000` to `min(n, 999999999)` and multiply by `2`.
4. Continue similarly for 3, 4, and 5 commas.
5. Return `ans`.

## Complexity

**Time Complexity:** `O(1)`

Only a fixed number of ranges are checked.

**Space Complexity:** `O(1)`

No extra data structures are used.

