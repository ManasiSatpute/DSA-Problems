# 4010. Maximum Pair Strength

## Problem Statement

You are given an integer array `nums`.

Choose exactly one pair of distinct indices `i` and `j`. The strength of the pair is defined as:

\[
\frac{nums[i] \times nums[j]}{\gcd(nums[i], nums[j])^2}
\]

Return the maximum strength over all possible pairs.

---

## Examples

### Example 1

**Input**

```text
nums = [2,3,5]
```

**Output**

```text
15
```

**Explanation**

Choosing `i = 1` and `j = 2` gives:

```text
(3 × 5) / gcd(3,5)²
= 15 / 1
= 15
```

This is the maximum possible strength.

---

### Example 2

**Input**

```text
nums = [4,6,8]
```

**Output**

```text
12
```

**Explanation**

Choosing `i = 1` and `j = 2` gives:

```text
(6 × 8) / gcd(6,8)²
= 48 / 4
= 12
```

This is the maximum strength.

---

### Example 3

**Input**

```text
nums = [3,3]
```

**Output**

```text
1
```

**Explanation**

Choosing the only possible pair:

```text
(3 × 3) / gcd(3,3)²
= 9 / 9
= 1
```

---

## Constraints

- `2 <= nums.length <= 2000`
- `1 <= nums[i] <= 10^5`
