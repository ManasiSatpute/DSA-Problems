# 3871. Count Commas in Range II

## Problem Statement

You are given an integer `n`.

Return the **total number of commas** used when writing all integers from `[1, n]` inclusive in **standard number formatting**.

In standard formatting:

* A comma is inserted after every three digits from the right.
* Numbers with fewer than 4 digits contain no commas.

## Examples

### Example 1

**Input:**

```text
n = 1002
```

**Output:**

```text
3
```

**Explanation:**

The numbers `1,000`, `1,001`, and `1,002` each contain one comma.

Therefore, the total number of commas is:

```text
3
```

### Example 2

**Input:**

```text
n = 998
```

**Output:**

```text
0
```

**Explanation:**

All numbers from `1` to `998` have fewer than four digits, so no commas are used.

## Constraints

```text
1 <= n <= 10^15
```

## Notes

Numbers can contain multiple commas:

```text
1,000                         -> 1 comma
1,000,000                     -> 2 commas
1,000,000,000                 -> 3 commas
1,000,000,000,000             -> 4 commas
1,000,000,000,000,000         -> 5 commas
```

The solution must therefore account for all possible comma ranges.
