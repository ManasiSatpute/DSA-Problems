# 696. Count Binary Substrings

## Problem Statement

Given a binary string `s`, return the number of **non-empty substrings** that:

* Have the same number of `0`s and `1`s
* All the `0`s and all the `1`s in the substring are grouped consecutively

Substrings that occur multiple times are counted as many times as they appear.

---

## Examples

### Example 1

**Input:**

```
s = "00110011"
```

**Output:**

```
6
```

**Explanation:**
Valid substrings:

```
"0011", "01", "1100", "10", "0011", "01"
```

---

### Example 2

**Input:**

```
s = "10101"
```

**Output:**

```
4
```

**Explanation:**
Valid substrings:

```
"10", "01", "10", "01"
```

---

## Constraints

* `1 <= s.length <= 10^5`
* `s[i]` is either `'0'` or `'1'`

---

## Goal

Count all substrings where the number of consecutive `0`s equals the number of consecutive `1`s.
