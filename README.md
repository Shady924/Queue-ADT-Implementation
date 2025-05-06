# Queue Data Structure Implementations

This repository contains three implementations of the Queue data structure:
1. **Array-based Queue** (fixed size)
2. **Linked List-based Queue** (dynamic size)
3. **Circular Queue** (efficient array-based)


## Features

  - `enqueue()` - Add an element to the end of the queue
  - `dequeue()` - Remove and return the front element
  - `peek()` - View the front element without removal
  - `isEmpty()` - Check if queue is empty
  - `GetLength()` - Get legnth of queue
  - `clear()` - Delete the queue
  - `Display()` - Display all elements from front to rear


  ## Implementations

### 1. ArrayQueue (`ArrayQueue.h`)
- Fixed capacity queue using a static array
- Simple implementation
- O(1) operations (except when full)

### 2. LinkedListQueue (`LinkedListQueue.h`)
- Dynamic size using nodes
- Never full (until memory exhausted)
- O(1) operations

### 3. CircularQueue (`CircularQueue.h`)
- Array-based with circular buffer
- Reuses empty spaces
- Automatic resizing when full
- O(1) amortized operations