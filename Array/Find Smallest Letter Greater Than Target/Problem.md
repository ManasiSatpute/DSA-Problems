# Find Smallest Letter Greater Than Target

You are given an array of characters `letters` that is sorted in **non-decreasing order**, and a character `target`.  
There are at least **two different characters** in `letters`.

Return the **smallest character** in `letters that is lexicographically greater than `target`.  
If no such character exists, return the` **first character** `in letters (wrap-around case)`.

---

## Examples

### Example 1
**Input:**  
letters = ["c","f","j"], target = "a"  

**Output:**  
"c"  

**Explanation:**  
The smallest character that is lexicographically greater than `'a'` is `'c'`.

---

### Example 2
**Input:**  
letters = ["c","f","j"], target = "c"  

**Output:**  
"f"  

**Explanation:**  
The smallest character that is lexicographically greater than `'c'` is `'f'`.

---

### Example 3
**Input:**  
letters = ["x","x","y","y"], target = "z"  

**Output:**  
"x"  

**Explanation:**  
There is no character lexicographically greater than `'z'`, so we return the first character of the array.
