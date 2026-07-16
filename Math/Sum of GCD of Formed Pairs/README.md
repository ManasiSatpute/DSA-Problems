# LeetCode 3867 - Sum of Prefix GCD Pairs

## Approach

The problem can be divided into three independent steps.

### Step 1: Construct the `prefixGcd` array

Maintain the maximum element encountered while traversing the array.

For every index:

- Update the current maximum.
- Compute the GCD of the current element and the current maximum.
- Store the result in `prefixGcd`.

### Step 2: Sort the array

Sort the constructed `prefixGcd` array in ascending order.

### Step 3: Form pairs

Use two pointers:

- One pointer starts from the beginning.
- Another starts from the end.

For every pair:

- Compute their GCD.
- Add it to the answer.
- Move both pointers toward the center.

If the array has an odd number of elements, the middle element remains unpaired and is ignored.

---

## Initial Mistake

My first implementation misunderstood how `prefixGcd` should be constructed.

I used a nested loop and generated multiple GCD values for every index.

```cpp
for(int j = 0; j <= i; j++)
```

However, the problem requires **exactly one** value for each index:

```
prefixGcd[i] = gcd(nums[i], maximum element in nums[0...i])
```

Because of this misunderstanding:

- Extra GCD values were generated.
- The size of the array became incorrect.
- The final answer was computed using only the smallest and largest values instead of processing every required pair.

After carefully reading the problem statement again, I simplified the solution by maintaining the prefix maximum and generating exactly one GCD value per index.

---

## Time Complexity

- Constructing `prefixGcd` : **O(n)**
- Sorting : **O(n log n)**
- Pairing : **O(n)**

**Overall:** `O(n log n)`

---

## Space Complexity

- `O(n)` for storing the `prefixGcd` array.

---

## Concepts Used

- Prefix Maximum
- Euclidean Algorithm (GCD)
- Sorting
- Two Pointers
