#include <iostream>
#include <stack>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

struct NodeWithPath {
    TreeNode* node;
    string path;
    NodeWithPath(TreeNode* n, const string& p) : node(n), path(p) {}
};

NodeWithPath dfs(TreeNode* root, int target) {
    stack<NodeWithPath> s;
    s.push(NodeWithPath(root, ""));

    while (!s.empty()) {
        NodeWithPath current = s.top();
        s.pop();

        if (current.node->data == target) {
            return current; // Found the target node
        }

        if (current.node->right) {
            s.push(NodeWithPath(current.node->right, current.path + "R"));
        }

        if (current.node->left) {
            s.push(NodeWithPath(current.node->left, current.path + "L"));
        }
    }

    return NodeWithPath(nullptr, ""); // Target node not found
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Perform DFS to find node with data 5 and its path from root
    int target = 5;
    NodeWithPath result = dfs(root, target);
    if (result.node) {
        cout << "Node with data " << target << " found at path: " << result.path << endl;
    } else {
        cout << "Node with data " << target << " not found." << endl;
    }

    // Clean up
    delete root->right->right;
    delete root->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
