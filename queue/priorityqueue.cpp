#include <iostream>
using namespace std;

int pq[100];
int n = 0;

// Insert element according to priority
void insert(int value)
{
    int i = n - 1;

    while (i >= 0 && pq[i] > value)
    {
        pq[i + 1] = pq[i];
        i--;
    }

    pq[i + 1] = value;
    n++;
}

// Delete element with highest priority
void deleteElement()
{
    if (n == 0)
    {
        cout << "Priority Queue is empty\n";
        return;
    }

    cout << "Deleted: " << pq[0] << endl;

    for (int i = 0; i < n - 1; i++)
    {
        pq[i] = pq[i + 1];
    }

    n--;
}

// Display queue
void display()
{
    if (n == 0)
    {
        cout << "Priority Queue is empty\n";
        return;
    }

    cout << "Priority Queue: ";

    for (int i = 0; i < n; i++)
    {
        cout << pq[i] << " ";
    }

    cout << endl;
}

int main()
{
    int choice, value;

    while (true)
    {
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            insert(value);
            break;

        case 2:
            deleteElement();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid choice\n";
        }
    }
}