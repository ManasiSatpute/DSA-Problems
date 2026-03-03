# Binomial Coefficient Calculator (nCr)

## 📌 Problem Statement

Implement a program to compute the **Binomial Coefficient (nCr)**.

The binomial coefficient represents the number of ways to choose `r` elements from a set of `n` elements without considering order.

Mathematically:

```
nCr = n! / (r! * (n - r)!)
```

Where:

* `n!` = factorial of n
* `r!` = factorial of r
* `(n - r)!` = factorial of (n - r)

---

## 🎯 Objective

Given two integers `n` and `r`:

* Compute `nCr`
* Use a structured and modular programming approach

---

## Example

### Input

```
n = 4
r = 2
```

### Output

```
6
```

### Explanation

```
4C2 = 4! / (2! * 2!)
     = 24 / (2 * 2)
     = 6
```

---

## Constraints (Typical Interview Assumptions)

* 0 ≤ r ≤ n
* n is a non-negative integer
* Result fits within integer limits (for basic implementation)

---

## Follow-up Considerations (Advanced Discussion)

* How to handle large values of `n`?
* How to prevent integer overflow?
* Can we optimize without calculating full factorials?
* Can we compute it using Pascal’s Triangle or Dynamic Programming?

This problem tests understanding of:

* Mathematical foundations
* Function modularity
* Time and space complexity awareness
* Edge case handling

---

This is a fundamental combinatorics problem commonly asked in technical interviews.
