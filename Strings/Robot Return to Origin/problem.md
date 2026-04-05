# 657. Robot Return to Origin

## Problem Statement

There is a robot starting at the position **(0, 0)**, the origin, on a 2D plane.  
Given a sequence of its moves, determine whether the robot ends up at **(0, 0)** after it completes all its moves.

You are given a string `moves` that represents the move sequence of the robot where `moves[i]` represents its *i-th* move.

Valid moves are:
- `'R'` → move right
- `'L'` → move left
- `'U'` → move up
- `'D'` → move down

Return **true** if the robot returns to the origin after completing all its moves, otherwise return **false**.

**Note:**
- The direction the robot is facing does not matter.
- `'R'` always moves the robot one unit right.
- `'L'` always moves the robot one unit left.
- `'U'` always moves the robot one unit up.
- `'D'` always moves the robot one unit down.
- Every move has the same magnitude.

---

## Examples

### Example 1

Input:
moves = "UD"

Output:
true

Explanation:  
The robot moves up once and then down once, returning to the origin.

---

### Example 2

Input:
moves = "LL"

Output:
false

Explanation:  
The robot moves left twice and ends up two steps left of the origin.

---

## Constraints

- `1 <= moves.length <= 2 * 10^4`
- `moves` only contains the characters `'U'`, `'D'`, `'L'`, and `'R'`.
