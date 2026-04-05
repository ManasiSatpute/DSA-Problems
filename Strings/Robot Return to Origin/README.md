# Robot Return to Origin (LeetCode 657)

## Overview
This repository contains a solution to the **Robot Return to Origin** problem.

A robot starts at the origin **(0,0)** on a 2D plane. You are given a string representing the robot's movement sequence. Each character in the string corresponds to a direction:

- `U` → Move up  
- `D` → Move down  
- `L` → Move left  
- `R` → Move right  

The task is to determine whether the robot returns to the origin after completing all moves.

---

## Problem Description
Given a string `moves`, where each character represents a move made by the robot, determine whether the robot ends at the starting position `(0,0)` after performing all the moves.

The robot moves one unit for each instruction and the direction it is facing does not affect the movement. Each command directly moves the robot in the specified direction.

---

## Approach
The robot’s position can be tracked using two coordinates:

- Horizontal position (left/right movement)
- Vertical position (up/down movement)

Each move updates the robot’s coordinates accordingly.  
After processing the entire sequence of moves, the robot returns to the origin only if both coordinates return to zero.

---

## Complexity Analysis

**Time Complexity:**  
O(n), where `n` is the length of the move string since each move is processed once.

**Space Complexity:**  
O(1), because only a constant amount of extra space is used to track the robot’s position.

