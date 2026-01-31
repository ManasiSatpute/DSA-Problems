# Find Smallest Letter Greater Than Target

This repository contains a C++ solution for the problem **Find Smallest Letter Greater Than Target**.

---

##  Problem Description

You are given a sorted array of characters `letters` and a character `target`.  
Your task is to return the **smallest character that is lexicographically greater than `target`**.

If no such character exists, return the **first character** in the array (wrap-around case).

The complete problem statement is available in `problem.md`.

---

##  Solution Approach

- Traverse the array from left to right.
- Return the first character that is greater than `target`.
- If no such character is found, return `letters[0]`.

Since the array is sorted, this approach works efficiently.

---

##  Implementation

The solution is implemented in **C++** and can be found in:
solution.cpp


---

##  Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

##  Repository Structure
```
├── problem.md
├── solution.cpp
└── README.md
```
