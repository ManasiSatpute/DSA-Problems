# 1980. Find Unique Binary String

## Problem Statement

You are given an array of strings `nums` containing **n unique binary strings**, each of length **n**.

Return a **binary string of length n** that **does not appear in `nums`**.  
If there are multiple possible answers, you may return **any of them**.

A **binary string** is a string that contains only the characters `'0'` and `'1'`.

---

## Example 1

**Input**

```
nums = ["01","10"]
```

**Output**

```
"11"
```

**Explanation**

"11" does not appear in `nums`.  
"00" would also be a valid answer.

---

## Example 2

**Input**

```
nums = ["00","01"]
```

**Output**

```
"11"
```

**Explanation**

"11" does not appear in `nums`.  
"10" would also be a valid answer.

---

## Example 3

**Input**

```
nums = ["111","011","001"]
```

**Output**

```
"101"
```

**Explanation**

"101" does not appear in `nums`.  
Other valid answers include `"000"`, `"010"`, `"100"`, and `"110"`.

---

## Constraints

- `n == nums.length`
- `1 <= n <= 16`
- `nums[i].length == n`
- `nums[i]` is either `'0'` or `'1'`
- All strings in `nums` are **unique**

---

## Notes

- The returned string must have **length n**.
- The returned string must **not exist in the input array**.
- If multiple answers are possible, **any valid binary string can be returned**.
