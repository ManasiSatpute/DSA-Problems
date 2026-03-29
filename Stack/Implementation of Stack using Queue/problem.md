# 225. Implement Stack using Queues

## Problem Statement
Implement a **last-in-first-out (LIFO) stack** using only **two queues**.  
The implemented stack should support all the functions of a normal stack:
- `push`
- `pop`
- `top`
- `empty`

---

## Implement the MyStack class:

- `void push(int x)`  
  Pushes element `x` to the top of the stack.

- `int pop()`  
  Removes the element on the top of the stack and returns it.

- `int top()`  
  Returns the element on the top of the stack.

- `boolean empty()`  
  Returns `true` if the stack is empty, otherwise `false`.

---

## Example

### Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
### Output
[null, null, null, 2, 2, false]

### Explanation
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // returns 2
myStack.pop(); // returns 2
myStack.empty(); // returns false

---

## Constraints
- `1 <= x <= 9`
- At most `100` calls will be made to `push`, `pop`, `top`, and `empty`
- All the calls to `pop` and `top` are valid

---
