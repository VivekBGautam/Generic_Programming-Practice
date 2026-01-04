# Generic_Linked_List-Implementations (C++)

This repository contains **generic implementations of linked lists in C++**, created for learning, practicing, and mastering **Data Structures & Algorithms (DSA)** concepts. Each linked list type demonstrates object-oriented design, pointer manipulation, traversal logic, and dynamic memory management using C++.

---

##  Linked List Types Implemented

### 1️ Singly Linear Linked List (SinglyLL)

**Description:**

* Each node contains data and a pointer to the next node
* Last node points to `NULL`

**Key Characteristics:**

* Unidirectional traversal
* Dynamic memory allocation using `new` / `delete`
* Efficient insertion and deletion

**Common Operations:**

* InsertFirst / InsertLast
* InsertAtPos
* DeleteFirst / DeleteLast
* DeleteAtPos
* Display
* Count

---

### 2️ Singly Circular Linked List (SinglyCL)

**Description:**

* Each node contains data and a pointer to the next node
* Last node points back to the first node

**Key Characteristics:**

* Circular traversal
* No `NULL` pointer
* Efficient for round-robin scheduling

**Common Operations:**

* InsertFirst / InsertLast
* InsertAtPos
* DeleteFirst / DeleteLast
* DeleteAtPos
* Display
* Count

---

### 3️ Doubly Linear Linked List (DoublyLL)

**Description:**

* Each node contains data, next pointer, and previous pointer
* First node’s previous is `NULL`
* Last node’s next is `NULL`

**Key Characteristics:**

* Bidirectional traversal
* Easier deletion compared to singly linked list

**Common Operations:**

* InsertFirst / InsertLast
* InsertAtPos
* DeleteFirst / DeleteLast
* DeleteAtPos
* Display
* Count

---

### 4️ Doubly Circular Linked List (DoublyCL)

**Description:**

* Each node contains data, next pointer, and previous pointer
* Last node’s next points to first node
* First node’s previous points to last node

**Key Characteristics:**

* Circular + bidirectional traversal
* No `NULL` pointers
* Highly efficient traversal

**Common Operations:**

* InsertFirst / InsertLast
* InsertAtPos
* DeleteFirst / DeleteLast
* DeleteAtPos
* Display
* Count

---

## 🛠️ Technologies Used

* **Language:** C++
* **Compiler:** GCC / MinGW
* **Concepts:**

  * Classes & Objects
  * Pointers & References
  * Dynamic Memory Allocation
  * Constructors & Destructors

---

## Project Structure (Example)

```
SinglyLL_generic_Final.cpp
SinglyCL_Generic_Final.cpp
DoublyLL_Generic_Final.cpp
DoublyCL_Generic_Final.cpp
README.md
```

---

##  Purpose of This Repository

* Build a strong foundation in **Linked List internals**
* Practice **object-oriented DSA in C++**
* Preparation for Interwive
---

## Author

**Vivek Gautam**
📧 Email: **[vivekbgautam@gmail.com](mailto:vivekbgautam@gmail.com)**
🔗 GitHub: **[https://github.com/vivekbgautam](https://github.com/vivekbgautam)**

---


