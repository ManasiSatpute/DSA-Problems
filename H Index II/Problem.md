#  H-Index II

##  Problem Statement

Given an array of integers `citations` where `citations[i]` is the number of citations a researcher received for their *i-th* paper. The array is sorted in **non-decreasing order**.

Return the researcher's **h-index**.

According to the definition:

> The **h-index** is the maximum value of `h` such that the researcher has published at least `h` papers that have each been cited at least `h` times.

 You must write an algorithm that runs in **O(log n)** time.

---

##  Examples

### Example 1:

```
Input: citations = [0,1,3,5,6]
Output: 3
```

**Explanation:**

* Total papers = 5
* Papers with ≥ 3 citations = 3
* Remaining papers have ≤ 3 citations
   So, h-index = **3**

---

### Example 2:

```
Input: citations = [1,2,100]
Output: 2
```

**Explanation:**

* Papers with ≥ 2 citations = 2
   So, h-index = **2**

---

## 🔍 Constraints

* `1 <= citations.length <= 10^5`
* `0 <= citations[i] <= 10^9`
* `citations` is sorted in **ascending order**

