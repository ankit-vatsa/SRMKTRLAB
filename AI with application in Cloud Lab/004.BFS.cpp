#include <iostream>
#include <queue>

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

NodeWithPath bfs(TreeNode* root, int target) {
    queue<NodeWithPath> q;
    q.push(NodeWithPath(root, ""));

    while (!q.empty()) {
        NodeWithPath current = q.front();
        q.pop();

        if (current.node->data == target) {
            return current; // Found the target node
        }

        if (current.node->left) {
            q.push(NodeWithPath(current.node->left, current.path + "L"));
        }

        if (current.node->right) {
            q.push(NodeWithPath(current.node->right, current.path + "R"));
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

    // Perform BFS to find node with data 5 and its path from root
    int target = 5;
    NodeWithPath result = bfs(root, target);
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
