#include <iostream>
using namespace std;

#define MAX 100

class Queue
{
    int arr[MAX];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Insert element
    void enqueue(int value)
    {
        if (rear == MAX - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
        }

        rear++;
        arr[rear] = value;

        cout << value << " inserted into queue" << endl;
    }

    // Delete element
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << arr[front] << " deleted from queue" << endl;
        front++;

        // Reset queue when it becomes empty
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    // Display queue
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // View front element
    void peek()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.peek();

    q.dequeue();
    q.display();

    q.dequeue();
    q.display();

    return 0;
}