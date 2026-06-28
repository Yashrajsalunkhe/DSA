#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

void printInorder(Node* node) {
    if (node == nullptr) return;

    printInorder(node->left);   // 1. Visit left child
    cout << node->data << " ";  // 2. Print current node data
    printInorder(node->right);  // 3. Visit right child
}

// Function to safely free allocated heap memory
void freeTree(Node* node) {
    if (node == nullptr) return;

    freeTree(node->left);   // Delete left subtree
    freeTree(node->right);  // Delete right subtree
    delete node;            // Delete current node
}

void printTreeFromRoot(Node* root) {
    if (root == nullptr) return;

    // Layer 1: Root node data (10)
    cout << "        " << root->data << endl;

    // Layer 2: Connections below root
    if (root->left || root->right) {
        cout << "       /  \\" << endl;
    }

    // Layer 3: Left (20) and Right (30) data
    if (root->left)  cout << "      " << root->left->data;
    if (root->right) cout << "   " << root->right->data;
    cout << endl;

    // Layer 4: Connections below node 20
    if (root->left && (root->left->left || root->left->right)) {
        cout << "     / \\" << endl;
    }

    // Layer 5: Leaf nodes data (40 and 50)
    if (root->left && root->left->left)   cout << "    " << root->left->left->data;
    if (root->left && root->left->right)  cout << " " << root->left->right->data;
    cout << endl;
}

void printTreeUniversal(Node* root, const string& prefix = "", bool isLeft = false) {
    if (root == nullptr) return;

    // 1. Visit the right subtree first (prints at the top of the console layout)
    printTreeUniversal(root->right, prefix + (isLeft ? "│   " : "    "), false);

    // 2. Print the current node with structural branch characters
    cout << prefix;
    cout << (isLeft ? "└── " : "┌── ");
    cout << root->data << endl;

    // 3. Visit the left subtree (prints at the bottom of the console layout)
    printTreeUniversal(root->left, prefix + (isLeft ? "    " : "│   "), true);
}

int main(){
    
    Node* root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout<<"Tree Inorder : ";
    printInorder(root);
    cout<<endl;

    printTreeUniversal(root);
    //printTreeFromRoot(root);

    freeTree(root);

    return 0;

}