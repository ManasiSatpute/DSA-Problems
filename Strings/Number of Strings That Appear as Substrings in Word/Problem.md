# Number of Strings That Appear as Substrings in Word

## Problem Statement

Given an array of strings `patterns` and a string `word`, return the number of strings in `patterns` that appear as a substring in `word`.

A **substring** is a contiguous sequence of characters within a string.

---

## Example 1

**Input:**
```text
patterns = ["a","abc","bc","d"]
word = "abc"
```

**Output:**
```text
3
```

**Explanation:**
- `"a"` appears as a substring in `"abc"`.
- `"abc"` appears as a substring in `"abc"`.
- `"bc"` appears as a substring in `"abc"`.
- `"d"` does not appear as a substring in `"abc"`.

Therefore, **3** strings in `patterns` appear as substrings of `word`.

---

## Example 2

**Input:**
```text
patterns = ["a","b","c"]
word = "aaaaabbbbb"
```

**Output:**
```text
2
```

**Explanation:**
- `"a"` appears as a substring.
- `"b"` appears as a substring.
- `"c"` does not appear as a substring.

Therefore, **2** strings in `patterns` appear as substrings of `word`.

---

## Example 3

**Input:**
```text
patterns = ["a","a","a"]
word = "ab"
```

**Output:**
```text
3
```

**Explanation:**
Each occurrence of `"a"` in `patterns` is counted separately, and each appears as a substring of `"ab"`.

---

## Constraints

```text
1 <= patterns.length <= 100
1 <= patterns[i].length <= 100
1 <= word.length <= 100
patterns[i] and word consist of lowercase English letters.
```
