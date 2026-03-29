# 1653. Minimum Deletions to Make String Balanced

## Problem Statement

You are given a string `s` consisting only of the characters `'a'` and `'b'`.

A string is considered **balanced** if there is **no pair of indices** `(i, j)` such that:

* `i < j`
* `s[i] = 'b'` and `s[j] = 'a'`

In other words, all `'a'` characters must appear **before** any `'b'` characters.

You may delete any number of characters from `s`.

Return the **minimum number of deletions** required to make the string balanced.

---

## Examples

### Example 1

**Input:**

```
s = "aababbab"
```

**Output:**

```
2
```

---

### Example 2

**Input:**

```
s = "bbaaaaabb"
```

**Output:**

```
2
```

---

## Constraints

* `1 <= s.length <= 10^5`
* `s[i]` is either `'a'` or `'b'`

---

## Goal

Make the string balanced using the **minimum number of deletions**.
