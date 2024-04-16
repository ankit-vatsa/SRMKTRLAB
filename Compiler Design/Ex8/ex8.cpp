#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Define a structure for the syntax tree node
struct Node {
    string value;
    Node* left;
    Node* right;

    // Constructor
    Node(string val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to traverse the syntax tree and perform arithmetic operations
int evaluate(Node* root) {
    if (root->value == "+") {
        return evaluate(root->left) + evaluate(root->right);
    } else if (root->value == "-") {
        return evaluate(root->left) - evaluate(root->right);
    } else if (root->value == "*") {
        return evaluate(root->left) * evaluate(root->right);
    } else if (root->value == "/") {
        return evaluate(root->left) / evaluate(root->right);
    } else {
        return stoi(root->value); // Convert string to integer
    }
}

int main() {
    // Example syntax tree:
    //       +
    //     /   \
    //    61    *
    //         / \
    //        51   20

    // Construct the syntax tree
    char a,c;
    int b,d,e;
    cout<<"Give input 1"<<endl;
    cin>>a;
    cout<<"Give input 2"<<endl;
    cin>>b;
    cout<<"Give input 3"<<endl;
    cin>>c;
    cout<<"Give input 4"<<endl;
    cin>>d;
    cout<<"Give input 5"<<endl;
    cin>>e;

    Node* root = new Node("+");
    root->left = new Node("61");
    root->right = new Node("*");
    root->right->left = new Node("51");
    root->right->right = new Node("20");

    // Evaluate the expression
    int result = evaluate(root);

    // Output the result
    cout << "Result: " << result << endl; // Output: 13

    // Free memory by deleting nodes (optional)
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
