# Count Collisions on a Road (LeetCode 2211)

## Problem Statement

There are `n` cars on an infinitely long road. The cars are numbered from `0` to `n - 1` from **left to right**, and each car is located at a unique position.

You are given a **0-indexed string** `directions` of length `n`.

Each character in the string represents the movement of a car:

- `'L'` → moving **left**
- `'R'` → moving **right**
- `'S'` → **stationary**

All moving cars have the **same speed**.

---

## Collision Rules

The number of collisions is calculated using the following rules:

1. **Opposite Direction Collision**

   If two cars moving in opposite directions collide (`R` and `L`):

   ```
   collisions += 2
   ```

2. **Moving Car Hits Stationary Car**

   If a moving car hits a stationary car (`L → S` or `R → S`):

   ```
   collisions += 1
   ```

3. **After Collision**

   - Cars involved in a collision become **stationary**.
   - They remain at the collision point.
   - Cars cannot change their direction or state except by collision.

---

## Objective

Return the **total number of collisions** that will occur on the road.

---

## Example

### Example 1

**Input**

```
directions = "RLRSLL"
```

**Output**

```
5
```

---

## Explanation

The collisions occur as follows:

1. **Cars 0 and 1 collide**

```
R L
```

They move in opposite directions.

```
collisions = 2
```

Both cars become stationary.

---

2. **Cars 2 and 3 collide**

```
R S
```

Car 2 hits stationary car 3.

```
collisions = 3
```

---

3. **Cars 3 and 4 collide**

```
S L
```

Car 4 hits stationary car 3.

```
collisions = 4
```

---

4. **Cars 4 and 5 collide**

After car 4 becomes stationary, car 5 hits it.

```
collisions = 5
```

---

## Constraints

- `1 ≤ directions.length ≤ 10^5`
- `directions[i]` is `'L'`, `'R'`, or `'S'`.
