# LeetCode 1979 - Find Greatest Common Divisor of Array

## Approach

The objective is to find the Greatest Common Divisor (GCD) of the smallest and largest elements in the given array.

The solution consists of two steps:

1. Traverse the array once to determine the minimum and maximum elements.
2. Compute their GCD using the Euclidean Algorithm.

The Euclidean Algorithm is based on the property:

> `gcd(a, b) = gcd(b, a % b)`

The recursion continues until the remainder becomes `0`. At that point, the current divisor is the GCD.

---

## Algorithm

1. Initialize:
   - `mini = INT_MAX`
   - `maxi = INT_MIN`
2. Traverse the array:
   - Update `mini` whenever a smaller element is found.
   - Update `maxi` whenever a larger element is found.
3. Compute the GCD of `maxi` and `mini` using the recursive Euclidean Algorithm.
4. Return the computed GCD.

---

## Time Complexity

- Finding the minimum and maximum elements: **O(n)**
- Recursive GCD computation: **O(log(min(maxi, mini)))**

Overall Time Complexity:

```
O(n + log(min(maxi, mini)))
```

Since the logarithmic term is much smaller than the linear traversal, the overall complexity is:

```
O(n)
```

---

## Space Complexity

The algorithm uses only a constant amount of extra memory.

- Auxiliary Space: **O(1)**

The recursive GCD function uses the call stack, whose maximum depth is:

```
O(log(min(maxi, mini)))
```

Therefore:

- **Auxiliary Space:** `O(1)`
- **Total Space (including recursion stack):** `O(log(min(maxi, mini)))`
