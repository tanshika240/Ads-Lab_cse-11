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

// Function to count leaf nodes
int countLeafNodes(Node *root)
{
    if (root == nullptr)
        return 0;

    // If both left and right are null → it's a leaf
    if (root->left == nullptr && root->right == nullptr)
        return 1;

    return countLeafNodes(root->left) + countLeafNodes(root->right);
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

    cout << "Number of leaf nodes = " << countLeafNodes(root) << endl;

    return 0;
}