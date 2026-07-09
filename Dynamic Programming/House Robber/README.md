# House Robber (LeetCode 198)

## Approach

This problem can be solved using **Dynamic Programming (Memoization)**.

At every house, there are only **two possible choices**:

1. **Rob the current house**

   * Add the money in the current house.
   * Skip the next house because adjacent houses cannot be robbed.
   * Move to index `i + 2`.

2. **Skip the current house**

   * Do not rob the current house.
   * Move to the next house (`i + 1`).

The maximum profit at every index is the better of these two choices.

---

## Intuition

Instead of deciding whether to start from an even or odd index, think about the decision at **each house**.

For every house:

* If you rob it, you must skip the next one.
* If you skip it, you are free to consider the next house.

This creates overlapping subproblems, making **Dynamic Programming** the ideal approach.

---

## DP State

Let `solve(i)` represent the **maximum amount of money that can be robbed starting from index `i`.**

---

## Recurrence Relation

```text
solve(i) = max(
    nums[i] + solve(i + 2),
    solve(i + 1)
)
```

where:

* `nums[i] + solve(i + 2)` → Rob the current house.
* `solve(i + 1)` → Skip the current house.

---

## Base Case

If the current index is outside the array,

```cpp
if (i >= nums.size())
    return 0;
```

No houses are left to rob, so return `0`.

---

## Memoization

Since the same indices are visited multiple times, store the computed answer for each index in a DP array.

* If the value is already computed, return it directly.
* Otherwise, calculate it and store it.

This avoids repeated recursive calls and improves efficiency.

---

## Algorithm

1. Start from index `0`.
2. At every index:

   * Rob the current house and move to `i + 2`.
   * Skip the current house and move to `i + 1`.
3. Take the maximum of the two choices.
4. Store the result in the DP array.
5. Return the answer from `solve(0)`.

---

## Complexity Analysis

**Time Complexity:** `O(n)`

* Each index is computed only once.

**Space Complexity:** `O(n)`

* `O(n)` for the DP array.
* `O(n)` recursion stack in the worst case.

---

## Key Learning

* DP problems often involve making a **choice at every state**.
* Clearly defining the DP state makes it easier to derive the recurrence relation.
* Memoization helps eliminate repeated computations.
* Always verify the base case carefully to avoid out-of-bounds access.

---

## Mistakes I Made While Solving

* Initially thought the answer could be found by starting from index `0` or index `1`, but this approach does not work for all cases.
* Used an incorrect base case (`i > nums.size()`) instead of (`i >= nums.size()`).
* Forgot to include `nums[i]` while calculating the "rob" choice.
* Treated the "skip" choice as taking the next house instead of recursively solving from the next index.
* Forgot to return the maximum of the two choices.

These mistakes helped me understand that the correct DP approach is based on **making a decision at every index**, not on selecting a fixed starting position.
