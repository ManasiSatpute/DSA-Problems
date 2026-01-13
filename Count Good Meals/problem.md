# 1711. Count Good Meals

A **good meal** is a meal that contains **exactly two different food items** with a sum of deliciousness equal to a **power of two**.

You can pick any two different foods to make a good meal.

Given an array of integers `deliciousness` where `deliciousness[i]` is the deliciousness of the i-th item of food, return the number of different good meals you can make from this list **modulo (10^9 + 7)**.

> Note:  
> Items with different indices are considered different even if they have the same deliciousness value.

---

## Examples

### Example 1
**Input**
deliciousness = [1,3,5,7,9]

**Output**
4

**Explanation**
The good meals are:
- (1, 3) → sum = 4
- (1, 7) → sum = 8
- (3, 5) → sum = 8
- (7, 9) → sum = 16  

All sums are powers of two.

---

### Example 2
**Input**
deliciousness = [1,1,1,3,3,3,7]
**Output**
15

**Explanation**
- (1,1) → 3 ways
- (1,3) → 9 ways
- (1,7) → 3 ways  

Total = 15

---

## Constraints
- `1 <= deliciousness.length <= 10^5`
- `0 <= deliciousness[i] <= 2 * 10^5`

---

## Power of Two
A number `x` is a power of two if:
x > 0 AND (x & (x - 1)) == 0






