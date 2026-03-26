#include <iostream>
using namespace std;

struct Node {
    int value;        // the number stored in this node
    Node* left;       // pointer to the left child
    Node* right;      // pointer to the right child

    // Constructor to make a new node
    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

// A simple function to print the tree (in-order traversal)
void printTree(Node* root) {
    if (root == nullptr) return; // if tree is empty, stop
    printTree(root->left);       // go left first
    cout << root->value << " ";  // print current node
    printTree(root->right);      // then go right
}

int main() {
    // building the tree:
    Node* root = new Node(1);        // root node with value 1
    root->left = new Node(2);        // left child with value 2
    root->right = new Node(3);       // right child with value 3
    root->left->left = new Node(4);  // left child of 2 is 4
    root->left->right = new Node(5); // right child of 2 is 5

    cout << "Tree values in order: ";
    printTree(root); 
    return 0;
}
