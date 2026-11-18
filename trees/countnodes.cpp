#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

// Function to count total nodes
int countNodes(Node *root)
{
    if (root == nullptr)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    /* Constructed binary tree is:
              1
            /   \
           2     3
          / \   / \
         4   5 6   7
    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Total number of nodes = " << countNodes(root) << endl;

    return 0;
}