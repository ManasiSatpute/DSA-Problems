# 1888. Minimum Number of Flips to Make the Binary String Alternating

## Problem Statement

You are given a binary string `s`.

You are allowed to perform two types of operations on the string in any sequence:

### Type-1 Operation
Remove the character at the start of the string `s` and append it to the end of the string.

### Type-2 Operation
Pick any character in `s` and flip its value:
- `'0'` becomes `'1'`
- `'1'` becomes `'0'`

Return the **minimum number of type-2 operations** needed to make `s` alternating.

A string is called **alternating** if no two adjacent characters are equal.

Examples of alternating strings:
- `"010"`
- `"1010"`

Examples of non-alternating strings:
- `"0100"`
- `"1110"`

---

## Example 1

Input:
s = "111000"

Output:
2

Explanation:
After some rotations and flips, the string can become `"101010"`.

---

## Example 2

Input:
s = "010"

Output:
0

Explanation:
The string is already alternating.

---

## Example 3

Input:
s = "1110"

Output:
1

Explanation:
After rotating once, `"1110"` → `"1101"`.
Flipping one character makes it alternating.

---

## Constraints

- 1 ≤ s.length ≤ 10⁵
- `s[i]` is either `'0'` or `'1'`
