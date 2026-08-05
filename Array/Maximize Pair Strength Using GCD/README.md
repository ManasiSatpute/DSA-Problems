# 4010. Maximum Pair Strength

## Approach

The problem asks us to compute the strength for **every possible pair** of distinct elements and return the maximum value.

The strength of a pair is defined as:

\[
\frac{a \times b}{\gcd(a,b)^2}
\]

Since `n ≤ 2000`, checking every pair is feasible.

For each pair:

1. Compute the GCD using the Euclidean Algorithm.
2. Calculate the product of the two numbers.
3. Divide the product by the square of the GCD.
4. Keep track of the maximum strength found.

---

## Algorithm

1. Initialize `ans = 0`.
2. Iterate through every pair `(i, j)` where `i < j`.
3. Compute:
   - `g = gcd(nums[i], nums[j])`
   - `strength = (nums[i] * nums[j]) / (g * g)`
4. Update `ans` with the maximum value.
5. Return `ans`.

---

## Dry Run

### Input

```text
nums = [4,6,8]
```

### Pair Calculations

| Pair | GCD | Product | Strength |
|------|----:|--------:|---------:|
| (4,6) | 2 | 24 | 24 / 4 = 6 |
| (4,8) | 4 | 32 | 32 / 16 = 2 |
| (6,8) | 2 | 48 | 48 / 4 = 12 |

Maximum strength:

```text
12
```

---

## Complexity Analysis

- **Time Complexity:** `O(n² × log(max(nums)))`
  - There are `O(n²)` pairs.
  - Each GCD computation takes `O(log(max(nums)))`.

- **Space Complexity:** `O(1)`

---

## Concepts Used

- Euclidean Algorithm (GCD)
- Nested Loops
- Mathematics
- Brute Force
```
