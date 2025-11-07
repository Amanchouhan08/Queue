//program to demonstrate a Queue using the STL.
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;  // create a queue of integers

    // Insert elements (enqueue)
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Rear element: " << q.back() << endl;

    // Remove one element (dequeue)
    q.pop();

    cout << "After one pop, front element: " << q.front() << endl;

    // Display all elements
    cout << "Remaining queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}

