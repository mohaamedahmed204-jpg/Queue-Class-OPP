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
| Enqueue | `void push(T Item)` | Adds an element to the back of the queue and updates the internal back state. |
| Dequeue | `void pop()` | Removes the front element from the queue. Resets _Back if the queue becomes empty. |
| Front Access | `T front()` | Retrieves the element at the front of the queue without removing it. |
| Back Access | `T back()` | Retrieves the element at the end of the queue. |

## ⚡ Utility & Information

| Operation | Method Signature | Description |
| :--- | :--- | :--- |
| Size | `int Size()` |	Returns the total number of elements currently in the queue. |
| Is Empty | `bool IsEmpty()` |	Checks whether the queue contains no elements. |
| Print | `void Print()` | Outputs all queue elements sequentially to standard output. |
| Clear |	`void Clear()` | Clears all elements from the queue and resets its structure. |

## ⚡ Extended / Index-Based Operations

| Operation | Method Signature | Description |
| :--- | :--- | :--- |
| Get Item | `T GetItem(long long Index)` |	Retrieves the value stored at a specific 0-based index. |
| Update Item |	`void UpdateItem(long long Index, T Value)` |	Updates the value of an existing node at a specific index. |
| Insert After | `void InsertAfter(long long Index, T Value)` |	Inserts a new node directly after the specified index. |
| Insert Front | `void InsertAtFront(T Value)` | Inserts an element directly at the head of the list. |
| Insert Back |	`void InsertAtBack(T Value)` | Inserts an element directly at the tail of the list. |
| Reverse |	`void Reverse()` | Inverts the node sequence inside the underlying linked list. |

## 💡 Key Concepts Demonstrated

Generic Programming (Templates): Supports any data type (int, std::string, custom objects) dynamically at compile time using template <class T>.

Composition over Inheritance: clsMyQueue embeds clsDblLinkedList internally rather than inheriting from it, providing clean encapsulation.

Data Abstraction & Encapsulation: Internal properties like _MyList and _Back are kept protected/private, exposing only clean public member functions.

Custom Data Structure Engineering: Deep understanding of pointer manipulation, node traversal, dynamic memory management, and FIFO (First-In, First-Out) queue semantics.

## 🛠️ Technologies

Language: C++ (C++11 or higher recommended)

Paradigm: Object-Oriented Programming (OOP) & Generic Programming

Structure: Header-only class implementation (#pragma once)

## 📝 Topics (Hashtags):

`cpp` `data-structures` `queue` `doubly-linked-list` `templates` `oop` `cpp11`
