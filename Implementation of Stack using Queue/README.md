This problem implements a Stack (LIFO – Last In, First Out) data structure using only two queues, as required by LeetCode Problem 225: Implement Stack using Queues.
A normal stack supports the following operations:
1. push(x) – insert an element at the top
2. pop() – remove and return the top element
3. top() – return the top element without removing it
4. empty() – check whether the stack is empty
The challenge is to simulate this behavior using queues only, without directly using a stack.


This implementation uses two queues (q1 and q2).
Always maintain the top of the stack at the front of q1
During push, rearrange elements so that the newest element comes to the front


1. push(int x)
Steps:
Move all elements from q1 to q2
Push the new element x into q1
Move all elements back from q2 to q1
This ensures the most recently added element is always at the front of q1.

2. pop()
Remove and return the front element of q1
This represents the top of the stack

3. top()
Return the front element of q1 without removing it

4. empty()
Check whether q1 is empty
