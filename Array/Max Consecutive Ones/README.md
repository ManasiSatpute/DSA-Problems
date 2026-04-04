
## Approach

The idea is to iterate through the array and count the current streak of `1`s.

1. Maintain two variables:
   - `count` → current consecutive `1`s
   - `maxCount` → maximum consecutive `1`s found so far
2. Traverse the array:
   - If the current element is `1`, increment `count`.
   - If it is `0`, reset `count` to `0`.
3. Update `maxCount` during traversal.

---

## Time Complexity
O(n)

Where `n` is the length of the array.

---

## Space Complexity
O(1)

No extra space is used except a few variables.
