# Butterfly Pattern

## Problem Statement

Given an integer `n`, print a butterfly pattern consisting of stars (`*`).

### Example

For `n = 4`:

```text
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
```

### Input

A single integer `n`.

### Output

Print the butterfly pattern.

### Constraints

* 1 ≤ n ≤ 100

### Approach

The butterfly pattern consists of two parts:

1. Upper Half

   * Print increasing stars on both sides.
   * Print decreasing spaces in the middle.

2. Lower Half

   * Print decreasing stars on both sides.
   * Print increasing spaces in the middle.

By carefully controlling the number of stars and spaces using nested loops, the complete butterfly pattern can be generated.
