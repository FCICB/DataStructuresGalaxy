#include "TreeNode.h"
#include "bits/stdc++.h"

using namespace std;

BST::BST() : root(nullptr) {}

TreeNode *BST::insertRecursive(TreeNode *node, int value) {
    if (node == nullptr) {
        return new TreeNode(value);
    }

    if (value < node->data) {
        node->left = insertRecursive(node->left, value);
    } else if (value > node->data) {
        node->right = insertRecursive(node->right, value);
    }

    return node;
}

void BST::insert(int value) {
    root = insertRecursive(root, value);
}

void BST::inOrderTraversalRecursive(TreeNode *node) {
    if (node == nullptr) {
        return;
    }

    inOrderTraversalRecursive(node->left);
     cout << node->data << " ";
    inOrderTraversalRecursive(node->right);
}

void BST::inOrderTraversal() {
    inOrderTraversalRecursive(root);
    cout <<endl;
}

int main() {
    BST tree;

    tree.insert(5);
    tree.insert(3);
    tree.insert(8);
    tree.insert(1);
    tree.insert(4);
    tree.insert(7);
    tree.insert(9);

    std::cout << "In-order traversal of the BST: ";
    tree.inOrderTraversal();
}
