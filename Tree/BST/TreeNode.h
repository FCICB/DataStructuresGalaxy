
#ifndef DS_IMPLEMENTATION_TREENODE_H
#define DS_IMPLEMENTATION_TREENODE_H


class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    //constructor , list initializer
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};
class BST{
private:
    TreeNode* root;

    //inserting nodes and performing in-order traversal
    TreeNode*insertRecursive(TreeNode* node , int value);
    void inOrderTraversalRecursive(TreeNode* node);

public:
    BST();
    void insert(int value);
    void inOrderTraversal();


};

#endif //DS_IMPLEMENTATION_TREENODE_H
