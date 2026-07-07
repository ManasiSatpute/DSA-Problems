# LeetCode 3754 : Concatenate Non-Zero Digits and Multiply by Sum I

## Approach

### Step 1: Traverse the Number

* Extract each digit using the modulo (`% 10`) operator.
* Remove the processed digit using integer division (`/ 10`).

### Step 2: Ignore Zero Digits

* If the extracted digit is non-zero:

  * Store it in a `vector`.
  * Add it to the running sum.

### Step 3: Reconstruct the Number

Since digits are extracted from right to left, they are stored in reverse order inside the vector.

Traverse the vector from the last element to the first and construct the number using:

```cpp
result = result * 10 + digit;
```

This restores the original order of the digits.

### Step 4: Return the Answer

Multiply the reconstructed number by the sum of its non-zero digits.

---

## Example

### Input

```text
1203405
```

### Digit Extraction

```text
5 → Store
0 → Ignore
4 → Store
3 → Store
0 → Ignore
2 → Store
1 → Store
```

### Vector Contents

```text
[5, 4, 3, 2, 1]
```

### Reconstructed Number

```text
12345
```

### Sum of Non-zero Digits

```text
1 + 2 + 3 + 4 + 5 = 15
```

### Final Result

```text
12345 × 15
```

---

## Complexity Analysis

### Time Complexity

* Traversing the digits: **O(d)**
* Reconstructing the number: **O(d)**

Overall:

```text
O(d)
```

where **d** is the number of digits in the input integer.

### Space Complexity

The vector stores each non-zero digit once.

```text
O(d)
```

---

## Possible Optimization

The same problem can also be solved using a mathematical approach without storing the digits in a vector, reducing the extra space complexity from **O(d)** to **O(1)**. This implementation prioritizes simplicity and readability by using a vector to preserve the digits before reconstructing the final number.
