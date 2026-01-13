#  Count Good Meals (LeetCode 1711)

This repository contains an **optimized C++ solution** for LeetCode problem **1711 – Count Good Meals**.

---

##  Problem Summary

You are given a list of food items with their deliciousness values.  
A **good meal** is formed by choosing **two different items** whose sum is a **power of two**.

The task is to count all such valid pairs efficiently.

---

##  Approach (Hash Table)

### Key Idea:
- Use a **hash map** to store the frequency of previously seen deliciousness values.
- For each value `d`, check all powers of two.
- If `power - d` exists in the hash map, it forms a valid pair.

---

##  Algorithm

1. Initialize a hash map `freq`
2. Iterate through `deliciousness`
3. For each element:
   - Check all powers of 2 up to `2^21`
   - Add valid pair counts from hash map
4. Update the frequency map
5. Return result modulo `10^9 + 7`

---

##  Complexity

- **Time Complexity:** `O(n log M)`  
- **Space Complexity:** `O(n)`

Where `M` is the maximum possible sum.

---

##  Example

Input:
[1,1,1,3,3,3,7]
Output:
15
