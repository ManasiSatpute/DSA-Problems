# N-Queens

## Approach

This problem is solved using **Backtracking**.

We place queens row by row. For each row, we try every column and check whether placing a queen there is safe.

A position is considered safe if:

1. No queen exists in the same column.
2. No queen exists on the left diagonal.
3. No queen exists on the right diagonal.

If a position is safe:

* Place the queen.
* Recursively solve for the next row.
* Remove the queen (backtrack) to explore other possibilities.

## Algorithm

1. Start from row `0`.
2. Try placing a queen in every column.
3. Check whether the position is safe.
4. If safe:

   * Place the queen.
   * Recur for the next row.
   * Backtrack by removing the queen.
5. When all rows are processed, store the current board configuration.

## Complexity Analysis

### Time Complexity

```text
O(N!)
```

In the worst case, each row explores multiple valid column choices, resulting in factorial growth.

### Space Complexity

```text
O(N)
```

Recursive stack depth is at most `N` (excluding the output storage).
