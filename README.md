# Custom Template Queue Data Structure (clsMyQueue)

A generic, template-based implementation of a Queue Data Structure in C++, built from scratch using an underlying Doubly Linked List (clsDblLinkedList).

This project demonstrates Object-Oriented Programming (OOP) concepts, generic programming using C++ templates, composition, and custom memory management to provide a flexible and efficient Queue implementation.

## 🏗️ Architecture & Design

The class design follows the Composition design principle, wrapping a doubly linked list data structure to manage element lifecycle and positioning efficiently.

```text

+-------------------------------------------------------+
|                    clsMyQueue<T>                      |
+-------------------------------------------------------+
| - _MyList : clsDblLinkedList<T>                       |
| - _Back   : T                                         |
+-------------------------------------------------------+
| + push(Item)           + pop()                        |
| + front()              + back()                       |
| + Size()               + IsEmpty()                    |
| + GetItem(index)       + UpdateItem(index, value)     |
| + InsertAfter(...)     + Reverse()                    |
| + InsertAtFront(...)   + InsertAtBack(...)            |
| + Clear()              + Print()                      |
+-------------------------------------------------------+
                           |
                           v  (Wraps)
+-------------------------------------------------------+
|                 clsDblLinkedList<T>                   |
+-------------------------------------------------------+
```

## ⚡ Core Operations

| Operation | Method Signature | Description |
| :--- | :--- | :--- |
| Enqueue | void push(T Item) | Adds an element to the back of the queue and updates the internal back state. |
| Dequeue | void pop() | Removes the front element from the queue. Resets _Back if the queue becomes empty. |
| Front Access | T front() | Retrieves the element at the front of the queue without removing it. |
| Back Access | T back() | Retrieves the element at the end of the queue. |
