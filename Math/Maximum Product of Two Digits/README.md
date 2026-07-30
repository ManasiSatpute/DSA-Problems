# LeetCode 3536 - Maximum Product of Two Digits

## Approach

To maximize the product, we only need the two largest digits of the given number.

Instead of storing all the digits in a container and sorting them, we process the number digit by digit while maintaining the largest and second largest digits encountered so far.

For each extracted digit:

* If it is greater than or equal to the current largest digit, update both the largest and second largest values.
* Otherwise, if it is greater than the second largest digit, update only the second largest value.

After processing all digits, the answer is simply the product of these two values.

## Algorithm

1. Initialize two variables: `largest` and `secondLargest`.
2. Extract each digit using the modulo (`%`) operator.
3. Update the two variables based on the current digit.
4. Remove the processed digit by dividing the number by `10`.
5. Return the product of `largest` and `secondLargest`.

## Complexity Analysis

* **Time Complexity:** `O(d)`, where `d` is the number of digits in `n`.
* **Space Complexity:** `O(1)`.

## Key Idea

Since only the two largest digits contribute to the maximum product, sorting all the digits is unnecessary. Tracking the two largest digits during a single traversal results in a more efficient solution with constant extra space.
