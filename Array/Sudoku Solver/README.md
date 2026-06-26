# LeetCode 37 - Sudoku Solver

## Approach

This problem is solved using **Backtracking**.

We traverse the board cell by cell.

- If the current cell is already filled, move to the next cell.
- If it is empty (`'.'`), try placing digits from `'1'` to `'9'`.
- Before placing a digit, check whether it is valid by ensuring:
  - The digit is not present in the current row.
  - The digit is not present in the current column.
  - The digit is not present in the corresponding 3×3 sub-grid.
- If the placement is valid, recursively solve the remaining board.
- If no digit leads to a solution, backtrack by resetting the cell to `'.'`.

Since the problem guarantees exactly one solution, the recursion stops once a valid solution is found.

---

## Algorithm

1. Start from the first cell.
2. Skip filled cells.
3. For an empty cell:
   - Try digits `'1'` to `'9'`.
   - Check if the digit is safe.
   - Place the digit.
   - Recur for the next cell.
   - If recursion fails, remove the digit (backtracking).
4. When all rows are processed, the puzzle is solved.

