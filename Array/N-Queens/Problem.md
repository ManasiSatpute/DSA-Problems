# 51. N-Queens

## Problem Statement

The n-queens puzzle is the problem of placing `n` queens on an `n × n` chessboard such that no two queens attack each other.

Given an integer `n`, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where:

* `'Q'` indicates a queen.
* `'.'` indicates an empty space.

### Example 1

**Input:**

```text
n = 4
```

**Output:**

```text
[
 [".Q..",
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",
  "Q...",
  "...Q",
  ".Q.."]
]
```

### Example 2

**Input:**

```text
n = 1
```

**Output:**

```text
[
 ["Q"]
]
```

### Constraints

* 1 ≤ n ≤ 9
