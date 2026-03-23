#  H-Index – Solution Overview

##  Problem Summary

Given an array of integers `citations` where `citations[i]` represents the number of citations for the *i-th* paper, calculate the **H-index** of a researcher.

> H-index = maximum value `h` such that at least `h` papers have **≥ h citations**.

---

##  Approach Used in This Repository

###  Sorting + Linear Scan

**Idea:**
1. Sort the `citations` array in **descending order**.
2. Iterate over the array and check for each index `i` whether:
 `citations[i] >= i + 1`
3. Update the H-index (`count`) if the condition is true.
4. Stop iterating once the condition fails.

---

##  Key Notes

### count = i + 1 vs count++

- Both work in this loop because:
  - The array is sorted in descending order.
  - Iteration is sequential.
  - The loop breaks when the condition fails.
- `count = i + 1` is safer and directly follows the **H-index definition**.
- `count++` assumes each valid step increases the H-index by 1, which may fail in other loop structures.

---

## Complexity

- **Time:** O(n log n) (due to sorting)  
- **Space:** O(1)
