#include<iostream>
#include<CircularQueue.h>

int main() {

    Queue<int> q(4);
    q.DeQueue();  // Output: Queue is empty
    q.EnQueue(1);
    q.EnQueue(2);
    q.EnQueue(3);
    q.EnQueue(4); // Output: Queue is full 
    q.Display(); // Output: 1 2 3
    std::cout << "Peek: " << q.Peek() << "\n"; // Output: Peek: 1
    std::cout << "DeQueue: " << q.DeQueue() << "\n"; // Output: DeQueue: 1
    q.Display(); // Output: 2 3
    q.clear();
    q.Display(); // Output: Queue is empty
    std::cout << "Length: " << q.GetLength() << "\n"; // Output: Length: 0
    
    return 0;
}