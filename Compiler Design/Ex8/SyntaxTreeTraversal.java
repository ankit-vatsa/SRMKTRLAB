// Node class representing a node in the syntax tree
class Node {
    String value;
    Node left;
    Node right;

    public Node(String value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

public class SyntaxTreeTraversal {

    public static void main(String[] args) {
        // Create a syntax tree for the expression: (5 * 3) + (6 / 2)
        Node root = new Node("+");
        root.left = new Node("*");
        root.left.left = new Node("5");
        root.left.right = new Node("3");
        root.right = new Node("/");
        root.right.left = new Node("6");
        root.right.right = new Node("2");

        // Traverse the syntax tree and perform arithmetic operations
        int result = evaluateSyntaxTree(root);
        System.out.println("Result: " + result);
    }

    public static int evaluateSyntaxTree(Node node) {
        if (node == null) {
            return 0;
        }

        // If the node is a number, return its integer value
        if (isNumeric(node.value)) {
            return Integer.parseInt(node.value);
        }

        // Otherwise, recursively evaluate the left and right subtrees
        int leftValue = evaluateSyntaxTree(node.left);
        int rightValue = evaluateSyntaxTree(node.right);

        // Perform the operation based on the node's value
        switch (node.value) {
            case "+":
                return leftValue + rightValue;
            case "-":
                return leftValue - rightValue;
            case "*":
                return leftValue * rightValue;
            case "/":
                return leftValue / rightValue;
            default:
                throw new IllegalArgumentException("Invalid operator: " + node.value);
        }
    }

    public static boolean isNumeric(String str) {
        return str.matches("-?\\d+(\\.\\d+)?");
    }
}
