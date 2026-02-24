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

    if(data < root->data)
    root->left = insert(root->left, data);
    else if(data > root->data)
    root->right = insert(root->right, data);
    
    return root;
    
}


void inorder(Node* root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root==NULL)
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

bool searchTree(Node* root, int key)
{
    if(root == NULL)
    return false;

    if(root->data == key)
    return true;

    if(key>root->data)
    return searchTree(root->right, key);

    return searchTree(root->left, key);
}

int main()
{
    Node* root = new Node(10);
    insert(root, 20);
    insert(root, 0);
    insert(root, 80);
    insert(root, 2);
    insert(root, 23);
    insert(root, 32);
    insert(root, 41);

    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
}