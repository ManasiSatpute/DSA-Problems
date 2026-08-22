# 3622. Check Divisibility by Digit Sum and Product

## Intuition
We need two quantities derived from the digits of `n`:
- **Digit sum** — sum of all digits.
- **Digit product** — product of all digits.

Once we have both, we just check if `n % (sum + product) == 0`.

## Approach
1. Initialize `sum = 0` and `prod = 1`.
2. Repeatedly extract the last digit of `n` using `% 10`, and remove it using `/ 10`.
3. Add the digit to `sum` and multiply it into `prod`.
4. After the loop, compute `res = sum + prod`.
5. Return `true` if `n % res == 0`, else `false`.

## Why no division-by-zero risk?
Since `n` is a **positive** integer, it has at least one digit, so `sum >= 1` always.
Even if `prod` becomes `0` (because one of the digits is `0`), `res = sum + prod` is still
`>= 1`, so `n % res` is always safe.

## Complexity
- **Time:** `O(log10(n))` — we iterate once per digit of `n`.
- **Space:** `O(1)` — only a few integer variables are used.


## Tags
`Math` `Simulation` `Digit Manipulation`
