#  N-Repeated Element in Array (LeetCode 961)

##  Overview

This repository contains the solution and explanation for the **N-Repeated Element in Size 2N Array** problem from LeetCode.

The goal is to identify the element that appears **exactly N times** in an array of size `2N`.

---

##  Key Insight

Since:
- Only **one element** repeats
- All other elements appear **once**

We can detect the repeated element **as soon as it appears twice**.

---

##  Approach Used

###  Using Hash Set (Recommended)

- Traverse the array
- Store elements in a set
- If an element is already present → it is the answer

---

##  Algorithm

1. Create an empty `unordered_set`
2. Iterate through the array:
   - If element exists in set → return it
   - Else insert into set
3. Guaranteed return due to problem constraints

---

##  Complexity Analysis

| Metric | Value |
|------|------|
| Time Complexity | **O(N)** |
| Space Complexity | **O(N)** |

---

