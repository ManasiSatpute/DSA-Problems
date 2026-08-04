# Find Missing Elements

## Problem Statement

You are given an integer array `nums` consisting of **unique integers**.

Originally, `nums` contained every integer within a certain range. However, some integers might have gone missing from the array.

The **smallest** and **largest** integers of the original range are still present in `nums`.

Return a **sorted list** of all the missing integers in this range. If no integers are missing, return an empty list.

## Examples

### Example 1

**Input:**

```text
nums = [1,4,2,5]
```

**Output:**

```text
[3]
```

**Explanation:**

The smallest integer is `1` and the largest is `5`, so the complete range should be:

```text
[1,2,3,4,5]
```

Among these integers, only `3` is missing.

---

### Example 2

**Input:**

```text
nums = [7,8,6,9]
```

**Output:**

```text
[]
```

**Explanation:**

The smallest integer is `6` and the largest is `9`, so the complete range is:

```text
[6,7,8,9]
```

All integers are already present, so there are no missing integers.

---

### Example 3

**Input:**

```text
nums = [5,1]
```

**Output:**

```text
[2,3,4]
```

**Explanation:**

The smallest integer is `1` and the largest is `5`, so the complete range should be:

```text
[1,2,3,4,5]
```

The missing integers are:

```text
[2,3,4]
```

## Constraints

* `2 <= nums.length <= 100`
* `1 <= nums[i] <= 100`
* All integers in `nums` are unique.
* The smallest and largest integers of the original range are present in `nums`.

## Expected Output

Return a sorted `vector<int>` containing all missing integers between the minimum and maximum values in `nums`.

## Tags

`Array` `Hash Table` `Sorting`
