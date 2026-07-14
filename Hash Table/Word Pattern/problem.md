# 290. Word Pattern

## Problem Statement

Given a `pattern` and a string `s`, determine if `s` follows the same pattern.

A pattern means there is a **one-to-one correspondence** (bijection) between a letter in `pattern` and a non-empty word in `s`.

### Example 1

**Input**

```text
pattern = "abba"
s = "dog cat cat dog"
```

**Output**

```text
true
```

### Example 2

**Input**

```text
pattern = "abba"
s = "dog cat cat fish"
```

**Output**

```text
false
```

### Example 3

**Input**

```text
pattern = "aaaa"
s = "dog cat cat dog"
```

**Output**

```text
false
```

### Constraints

- `1 <= pattern.length <= 300`
- `pattern` contains only lowercase English letters.
- `1 <= s.length <= 3000`
- `s` contains lowercase English letters and spaces.
- Words in `s` are separated by a single space.
