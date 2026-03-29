# 1877. Minimize Maximum Pair Sum in Array

## Problem Statement

The **pair sum** of a pair `(a, b)` is equal to `a + b`. The **maximum pair sum** is the largest pair sum among all pairs.

You are given an array `nums` of **even length** `n`.

You must:

* Pair up the elements into `n / 2` pairs
* Use each element **exactly once**
* Minimize the **maximum pair sum** among all pairs

Return the minimized maximum pair sum.

---

## Examples

### Example 1

**Input:**

```
nums = [3,5,2,3]
```

**Output:**

```
7
```

**Explanation:**
Pairs can be `(3,3)` and `(5,2)`.
Maximum pair sum = `max(6, 7) = 7`.

---

### Example 2

**Input:**

```
nums = [3,5,4,2,4,6]
```

**Output:**

```
8
```

**Explanation:**
Pairs can be `(3,5)`, `(4,4)`, `(6,2)`.
Maximum pair sum = `8`.

---

## Constraints

* `n == nums.length`
* `2 <= n <= 10^5`
* `n` is even
* `1 <= nums[i] <= 10^5`

---

