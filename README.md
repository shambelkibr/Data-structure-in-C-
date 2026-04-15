# Data Structures README

## Overview

This document explains four fundamental data structures used in computer science:

* Searching
* Linked List
* Queue
* Stack

Each section includes concepts, operations, time complexity, and simple explanations.

---

# 1. Searching

## Definition

Searching is the process of finding a specific element in a data structure.

## Types of Searching

### 1. Linear Search

* Checks each element one by one
* Works on unsorted and sorted data

**Algorithm:**

1. Start from first element
2. Compare with target
3. If match → return index
4. Else move to next

**Time Complexity:**

* Best: O(1)
* Worst: O(n)

### 2. Binary Search

* Works only on sorted data
* Divides array into halves

**Algorithm:**

1. Find middle element
2. If match → return
3. If target < middle → search left
4. Else → search right

**Time Complexity:**

* Best: O(1)
* Worst: O(log n)

---

# 2. Linked List

## Definition

A linked list is a linear data structure where elements are stored in nodes.
Each node contains:

* Data
* Pointer (reference to next node)

## Types

* Singly Linked List
* Doubly Linked List
* Circular Linked List

## Operations

### 1. Insertion

* At beginning
* At end
* At position

### 2. Deletion

* Remove first node
* Remove last node
* Remove specific node

### 3. Traversal

* Visit each node sequentially

## Advantages

* Dynamic size
* Efficient insertion/deletion

## Disadvantages

* Extra memory for pointers
* No direct access (no indexing)

**Time Complexity:**

* Access: O(n)
* Insert/Delete: O(1) (if position known)

---

# 3. Stack

## Definition

Stack is a linear data structure that follows LIFO (Last In First Out).

## Operations

* Push → Insert element
* Pop → Remove element
* Peek → View top element

## Example

Stack of plates:

* Last plate added is first removed

## Implementation

* Array
* Linked List

## Applications

* Undo/Redo operations
* Expression evaluation
* Function calls (recursion)

**Time Complexity:**

* Push: O(1)
* Pop: O(1)
* Peek: O(1)

---

# 4. Queue

## Definition

Queue is a linear data structure that follows FIFO (First In First Out).

## Operations

* Enqueue → Insert element
* Dequeue → Remove element
* Front → Get first element

## Types

* Simple Queue
* Circular Queue
* Priority Queue
* Deque (Double-ended queue)

## Example

Queue in real life:

* People standing in line

## Applications

* CPU scheduling
* Task processing
* BFS (Breadth First Search)

**Time Complexity:**

* Enqueue: O(1)
* Dequeue: O(1)

---

# Comparison Table

| Structure   | Order      | Access | Insert/Delete |
| ----------- | ---------- | ------ | ------------- |
| Array       | Indexed    | O(1)   | O(n)          |
| Linked List | Sequential | O(n)   | O(1)          |
| Stack       | LIFO       | O(n)   | O(1)          |
| Queue       | FIFO       | O(n)   | O(1)          |

---

# Conclusion

* Use **Searching** to find data efficiently
* Use **Linked List** for dynamic memory usage
* Use **Stack** for LIFO operations
* Use **Queue** for FIFO operations

These are core concepts for algorithms, system design, and software development.

---

# (Optional) Practice Ideas

* Implement Linear and Binary Search in C++
* Create Linked List with insert at beginning/end/middle
* Build Stack using array
* Build Queue using linked list

---

End of Document
