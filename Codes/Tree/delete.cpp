#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Insert into BST
TreeNode* insert(TreeNode* root, int key) {
    if (!root) return new TreeNode(key);
    if (key < root->val)
        root->left = insert(root->left, key);
    else if (key > root->val)
        root->right = insert(root->right, key);
    return root;
}

// Find minimum value node in BST
TreeNode* findMin(TreeNode* node) {
    while (node && node->left != NULL)
        node = node->left;
    return node;
}

// Delete a node from BST
TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) return root;

    if (key < root->val)
        root->left = deleteNode(root->left, key);
    else if (key > root->val)
        root->right = deleteNode(root->right, key);
    else {
        // Case 1 & 2: Node has 0 or 1 child
        if (!root->left) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Node has 2 children
        TreeNode* temp = findMin(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}

// Inorder Traversal
void inorder(TreeNode* root) {
    if (root) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

int main() {
    TreeNode* root = NULL;
    int values[] = {50, 30, 70, 20, 40, 60, 80};

    for (int x : values)
        root = insert(root, x);

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    root = deleteNode(root, 50); // deleting root (50)

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
