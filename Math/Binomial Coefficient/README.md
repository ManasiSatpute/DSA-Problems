# Binomial Coefficient (nCr) – Recruiter-Oriented Documentation

## 📌 Overview

This project implements a C++ program to calculate the **Binomial Coefficient (nCr)** using the factorial formula.

The solution demonstrates:

* Clear function decomposition
* Mathematical implementation
* Basic algorithmic reasoning
* Clean and readable C++ structure

---

##  Approach

###  Factorial Function

A helper function computes factorial iteratively:

* Initializes result to 1
* Multiplies numbers from 1 to n
* Returns computed factorial

Time Complexity: **O(n)**
Space Complexity: **O(1)**

---

###  Binomial Coefficient Function

Using formula:

```
nCr = n! / (r! * (n - r)!)
```

Steps:

1. Compute `n!`
2. Compute `r!`
3. Compute `(n - r)!`
4. Apply formula and return result

Time Complexity: **O(n)**
Space Complexity: **O(1)**

---

##  Sample Execution

```cpp
Binomial Coefficient is : 6
```

---

##  Strengths of This Implementation

* Modular design (separate reusable functions)
* Clear variable naming
* Easy to understand logic
* Suitable for small inputs


```
nCr = n * (n-1) * ... / r!
```


##  Conclusion

This implementation correctly computes the binomial coefficient for small inputs and demonstrates solid foundational programming skills.

For larger-scale systems, further optimizations and data type adjustments would be recommended.

---

**Language Used:** C++
**Paradigm:** Procedural Programming
**Difficulty Level:** Beginner to Intermediate

---

Prepared as part of Data Structures & Algorithms practice.
