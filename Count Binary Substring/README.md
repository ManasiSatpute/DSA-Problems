# 696. Count Binary Substrings

##  Problem Summary

Given a binary string `s`, return the number of non-empty substrings that:

* Contain the same number of `0`s and `1`s.
* All `0`s are grouped consecutively.
* All `1`s are grouped consecutively.

Repeated substrings are counted as many times as they appear.

---

##  Approach

### Key Idea

Valid substrings are formed only between **adjacent groups** of consecutive `0`s and `1`s.

For example:

```
00110011
Groups: [00][11][00][11]
Counts:   2   2   2   2
```

For every pair of adjacent groups, the number of valid substrings is:

```
min(size_of_previous_group, size_of_current_group)
```

---

##  Algorithm

1. Track the length of the previous group (`prev`).
2. Track the length of the current group (`curr`).
3. Iterate through the string:

   * If the current character matches the previous one → increment `curr`.
   * Otherwise:

     * Add `min(prev, curr)` to result.
     * Update `prev = curr`.
     * Reset `curr = 1`.
4. After the loop, add `min(prev, curr)` one final time.

---

##  Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

##  Example

### Input

```
s = "00110011"
```

### Output

```
6
```

### Explanation

Valid substrings:

```
"0011", "01", "1100", "10", "0011", "01"
```

---

##  Why This Works

We only care about consecutive blocks of identical characters.
Any valid substring must span exactly two consecutive groups.

By counting group sizes and taking the minimum between adjacent groups,
we efficiently count all valid substrings in one pass.

---

###  Files

* `problem.md` → Full problem statement
* `solution.cpp` → C++ implementation
* `README.md` → Explanation and approach

---

Happy Coding 🚀
