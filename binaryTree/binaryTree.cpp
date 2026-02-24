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
    if(root == NULL)
    {
        return new Node(data);
    }

    if(root->left == NULL)
    root->left = new Node(data);
    else if(root->right == NULL)
    root->right = new Node(data);
    else
    insert(root->left, data);

    return root;
}

void preorder(Node* root)
{
    if(root == NULL)
    return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root == NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(Node* root)
{
    if(root == NULL)
    return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(60);
    root->right->right = new Node(50);
    root->right->left = new Node(70);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    insert(root, 80);

    cout << "Inorder traversal after insertion: ";
    inorder(root);
}