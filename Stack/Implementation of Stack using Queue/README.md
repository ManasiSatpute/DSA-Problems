# Implement Stack using Queues (LeetCode 225)

## Problem Description
This problem requires implementing a **Stack (LIFO – Last In, First Out)** using only **queues**.

A normal stack supports the following operations:
- `push(x)` – Insert an element at the top  
- `pop()` – Remove and return the top element  
- `top()` – Return the top element without removing it  
- `empty()` – Check whether the stack is empty  

The challenge is to simulate stack behavior **without directly using a stack**.

---

## Approach

This implementation uses **two queues (`q1` and `q2`)**.

### Key Idea
Always maintain the **top of the stack at the front of `q1`**.

During the `push` operation, elements are rearranged so that the newest element comes to the front.

---

## Operations

### 1. push(int x)
**Steps:**
1. Move all elements from `q1` to `q2`  
2. Push the new element `x` into `q1`  
3. Move all elements back from `q2` to `q1`  

 This ensures the most recently added element is always at the front of `q1`.

---

### 2. pop()
- Remove and return the **front element of `q1`**  
- This represents the top of the stack  

---

### 3. top()
- Return the **front element of `q1`** without removing it  

---

### 4. empty()
- Check whether `q1` is empty  

---

## Complexity Analysis

- **push:** `O(n)`  
- **pop:** `O(1)`  
- **top:** `O(1)`  
- **empty:** `O(1)`  

---

## Tags
 Stack, Queue, Design
