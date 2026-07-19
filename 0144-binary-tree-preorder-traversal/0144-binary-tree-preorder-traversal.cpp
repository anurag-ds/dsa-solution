#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    TreeNode* left;
    TreeNode* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
class Solution {
public:
    void preorder(TreeNode* root, vector<int>& arr) {
        if (root == nullptr) {
            return;
        }
        arr.push_back(root->val);
        preorder(root->left, arr);
        preorder(root->right, arr);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        preorder(root, arr);
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna