#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
class treeNode
{
public:
    int val;
    treeNode *left;
    treeNode *right;
    treeNode(int val1)
    {
        val = val1;
        left = NULL;
        right = NULL;
    }
};
treeNode *insertTree(treeNode *root, int value)
{
    if (!root)
    {
       return new treeNode(value);
    }
    else if (value > root->val)
        root->right = insertTree(root->right, value);
    else if (value < root->val)
        root->left = insertTree(root->left, value);
    return root;
}
void inoderTravel(treeNode *root)
{
    if (!root)
        return;
    inoderTravel(root->left);
    cout << root->val << " ";
    inoderTravel(root->right);
}
int main()
{
    treeNode *root = NULL;

    // Insert values into the BST
    root = insertTree(root, 50);
    insertTree(root, 30);
    insertTree(root, 70);
    insertTree(root, 20);
    insertTree(root, 40);
    insertTree(root, 60);
    insertTree(root, 80);

    cout << "Inorder traversal of the BST: ";
    inoderTravel(root);
    cout << endl;
}