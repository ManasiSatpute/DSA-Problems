# Electronics Shop

## Problem

Given the prices of keyboards and USB drives and a fixed budget, find the maximum amount that can be spent on buying exactly one keyboard and one USB drive without exceeding the budget.

If no valid combination can be purchased, return `-1`.

## Approach

The problem is solved using **Brute Force**.

We check every possible combination of a keyboard and a USB drive:

1. Select a keyboard.
2. Select every possible USB drive with it.
3. Calculate their total cost.
4. If the cost is within the budget, update the maximum cost.
5. Return the maximum affordable cost.

The initial answer is set to `-1` so that if no combination is affordable, the function returns `-1`.

## Algorithm

```text
maxBudget = -1

for every keyboard:
    for every USB drive:
        cost = keyboard + drive

        if cost <= budget:
            maxBudget = maximum(maxBudget, cost)

return maxBudget
