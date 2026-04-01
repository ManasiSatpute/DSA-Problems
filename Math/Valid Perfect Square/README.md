#  Valid Perfect Square

##  Overview

The goal is to determine whether a given positive integer is a **perfect square**.

A number is called a perfect square if it can be expressed as:

n = k × k
where `k` is an integer.

---

##  Approaches

---

###  Square Root Approach

* Compute the square root of the number
* Check whether the result is an integer

If the square root is a whole number, then the input is a perfect square.

####  Complexity

| Type  | Complexity |
| ----- | ---------- |
| Time  | O(1)       |
| Space | O(1)       |


---

###  Binary Search Approach

We try to find an integer `k` such that:

k × k = num

Steps:

* Search in the range [1, num]
* Calculate mid × mid
* Compare with `num` and adjust the range

####  Complexity

| Type  | Complexity |
| ----- | ---------- |
| Time  | O(log n)   |
| Space | O(1)       |

---

###  Sum of Odd Numbers Approach

A perfect square can be represented as the sum of consecutive odd numbers:

n = 1 + 3 + 5 + 7 + ...

Steps:

* Keep subtracting odd numbers starting from 1
* If the number becomes 0 → perfect square
* If it becomes negative → not a perfect square

####  Complexity

| Type  | Complexity |
| ----- | ---------- |
| Time  | O(√n)      |
| Space | O(1)       |

---

##  Summary

| Approach          | Time Complexity | Notes                   |
| ----------------- | --------------- | ----------------------- |
| Square Root       | O(1)            | Simple but restricted   |
| Binary Search     | O(log n)        | Efficient and preferred |
| Odd Number Method | O(√n)           | Mathematical insight    |

---


