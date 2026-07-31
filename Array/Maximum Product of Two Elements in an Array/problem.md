# 1464. Maximum Product of Two Elements in an Array

## Problem Statement

Given the array of integers `nums`, you will choose two different indices `i` and `j` of that array.

Return the maximum value of:

```
(nums[i] - 1) * (nums[j] - 1)
```

### Example 1

**Input**

```
nums = [3,4,5,2]
```

**Output**

```
12
```

**Explanation**

Choosing the elements `4` and `5` gives:

```
(4 - 1) * (5 - 1) = 3 * 4 = 12
```

---

### Example 2

**Input**

```
nums = [1,5,4,5]
```

**Output**

```
16
```

**Explanation**

Choose the two `5`s:

```
(5 - 1) * (5 - 1) = 4 * 4 = 16
```

---

### Example 3

**Input**

```
nums = [3,7]
```

**Output**

```
12
```

---

## Constraints

- `2 <= nums.length <= 500`
- `1 <= nums[i] <= 10^3`
