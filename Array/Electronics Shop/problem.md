# Electronics Shop

## Problem Statement

A person wants to buy one keyboard and one USB drive within a given budget.

You are given:

- An array `keyboards` containing the prices of keyboards.
- An array `drives` containing the prices of USB drives.
- An integer `b` representing the available budget.

Find the **maximum amount of money** that can be spent on one keyboard and one USB drive without exceeding the budget.

If it is not possible to buy both items within the budget, return `-1`.

## Example

Suppose:

keyboards = [40, 50, 60]
drives = [5, 8, 12]
budget = 60

Possible combinations:

40 + 5  = 45
40 + 8  = 48
40 + 12 = 52
50 + 5  = 55
50 + 8  = 58
50 + 12 = 62  
60 + 5  = 65  

The maximum amount that can be spent without exceeding the budget is:

58
