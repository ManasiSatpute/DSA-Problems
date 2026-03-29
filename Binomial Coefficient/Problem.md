# Binomial Coefficient Calculator (nCr)

##  Problem Statement

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

##  Objective

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
