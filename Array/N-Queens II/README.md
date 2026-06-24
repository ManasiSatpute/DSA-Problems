# N-Queens II

## Approach

This problem is solved using **Backtracking**.

We place queens row by row and recursively explore all valid positions. Whenever a valid arrangement of queens is found, we count it as one solution.

Unlike N-Queens (LeetCode 51), where we store all board configurations, here we only return the **total number of valid arrangements**.

## Algorithm

1. Start from the first row.
2. Try placing a queen in every column.
3. Check whether the current position is safe:

   * No queen exists in the same column.
   * No queen exists on the left diagonal.
   * No queen exists on the right diagonal.
4. If safe:

   * Place the queen.
   * Recursively solve for the next row.
   * Backtrack by removing the queen.
5. When all rows are filled, return `1` to indicate a valid arrangement.
6. Sum all valid arrangements and return the total count.

## Dry Run (n = 4)

```text
Row 0 → Place Queen
Row 1 → Place Queen
Row 2 → Invalid Position → Backtrack
Row 1 → Try Next Position
...
Valid Solution Found → Count = 1
Valid Solution Found → Count = 2
```

Final Answer:

```text
2
```

## Complexity Analysis

### Time Complexity

```text
O(N!)
```

In the worst case, we explore multiple column choices for each row.

### Space Complexity

```text
O(N)
```

The recursion stack can grow up to `N` levels.


## Difference Between N-Queens and N-Queens II

| Problem          | Output                                        |
| ---------------- | --------------------------------------------- |
| N-Queens (51)    | Return all valid board configurations         |
| N-Queens II (52) | Return only the count of valid configurations |

