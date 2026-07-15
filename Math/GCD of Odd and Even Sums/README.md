# GCD of Odd and Even Sums

## Approach

The problem asks for the GCD of:
- Sum of the first `n` odd numbers
- Sum of the first `n` even numbers

Instead of generating the numbers and calculating their sums manually, we can use mathematical formulas.

- Sum of first `n` odd numbers = `n²`
- Sum of first `n` even numbers = `n × (n + 1)`

After computing these two values, we simply apply the Euclidean Algorithm to find their Greatest Common Divisor (GCD).

## Mistake I Made

Initially, while implementing the recursive GCD function, I forgot to return the recursive call.

Incorrect:

```cpp
gcd(div, rem);
```

Correct:

```cpp
return gcd(div, rem);
```

Without returning the recursive call, the function reaches the end without returning a value, leading to undefined behavior.

## Algorithm

1. Calculate the sum of the first `n` odd numbers using `n²`.
2. Calculate the sum of the first `n` even numbers using `n × (n + 1)`.
3. Find the GCD of these two sums using the Euclidean Algorithm.
4. Return the GCD.

## Time Complexity

- **O(log(min(a, b)))**
  - Euclidean Algorithm computes the GCD efficiently.

## Space Complexity

- **O(log(min(a, b)))**
  - Due to recursive function calls.
