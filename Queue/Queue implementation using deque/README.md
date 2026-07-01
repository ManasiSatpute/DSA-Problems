# Queue Implementation Using Deque (C++)

## Project Overview

This project demonstrates a **custom Queue implementation** using the **C++ Standard Template Library (STL) `deque`**.  
The queue supports basic operations efficiently while leveraging the power of `deque` for constant time insertion and deletion.

---

## Features

- **Push:** Add an element to the back of the queue  
- **Pop:** Remove the front element from the queue  
- **Front:** Access the element at the front of the queue  
- **Empty:** Check if the queue is empty  

---

## Example Usage

```cpp
Queue q;
q.push(1);
q.push(2);
q.push(3);

while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
}

