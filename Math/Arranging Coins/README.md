#  Arranging Coins - LeetCode 441

##  Approaches

---

## 1️ Brute Force Approach

We simulate building the staircase row by row:
- Start from row 1 and keep adding rows
- For each row `i`, subtract `i` coins from `n`
- Stop when we don’t have enough coins for the next row

###  Complexity
| Type | Complexity |
|------|----------|
| Time | O(n) |
| Space | O(1) |

###  Drawback
- Inefficient for large inputs
- Will be slow when `n` is very large (up to 2³¹ - 1)

---

##  Binary Search Approach

###  Idea
Instead of simulating, we search for the maximum `k` such that:

k × (k + 1) / 2 ≤ n

Steps:
- Define search space from 0 to `n`
- Use binary search to find the largest valid `k`
- Check condition using the formula for sum of first `k` natural numbers

###  Complexity
| Type | Complexity |
|------|----------|
| Time | O(log n) |
| Space | O(1) |

---

##  Mathematical (Optimal) Approach

###  Insight

We use the formula for sum of first `k` natural numbers:

k × (k + 1) / 2 ≤ n

Rewriting:

k² + k - 2n ≤ 0

Solving using quadratic formula:

k = ( -1 + √(1 + 8n) ) / 2

This directly gives the number of complete rows.

---

###  Complexity
| Type | Complexity |
|------|----------|
| Time | O(1) |
| Space | O(1) |

---

##  Summary

| Approach        | Time Complexity | Notes |
|----------------|---------------|------|
| Brute Force    | O(n)          | Simple but slow |
| Binary Search  | O(log n)      | Efficient |
| Mathematical   | O(1)          |  Best |

