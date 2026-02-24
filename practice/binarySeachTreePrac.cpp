#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data; 
        this->left = this->right = NULL;
    }
};

Node* insert(Node* root, int data)
{
    if (root == NULL)
        return new Node(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

void inorder(Node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

bool searchTree(Node* root, int key)
{
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return searchTree(root->left, key);

    return searchTree(root->right, key);
}

Node* findMin(Node* root)
{
    while (root && root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        // Node found

        // Case 1: No child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // Case 2: One child
        else if (root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Two children
        Node* temp = findMin(root->right); // Inorder successor
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    Node* root = NULL;

    root = insert(root, 40);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 15);
    root = insert(root, 45);
    root = insert(root, 55);
    root = insert(root, 5);
    root = insert(root, 90);
    root = insert(root, 50);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    if (searchTree(root, 90))
        cout << "present" << endl;
    else
        cout << "absent" << endl;

    // Now deleting a node
    root = deleteNode(root, 45);
    cout << "Inorder after deleting 45: ";
    inorder(root);
    cout << endl;

    return 0;
}
