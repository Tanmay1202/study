#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* insert(Node* root, int value)
{
    if(root == NULL)
    {
        return new Node(value);
    }
    if(value<root->data)
    {
        root->left = insert(root->left, value);
    }
    else if(value>root->data)
    {
        root->right = insert(root->right, value);
    }
    else
    {
        root->left = insert(root->left, value);
    }
    return root;
}

Node* search(Node* root, int key)
{
    if(root==NULL || root->data == key)
    {
        return root;
    }

    if(key>root->data)
    {
        return search(root->right, key);
    }

    return search(root->left, key);
}

void inorderTraversal(Node* &root)
{
    if(root!=NULL)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    } 
}





int main()
{
    Node* root = NULL;
    root = insert(root, 60);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 35);
    root = insert(root, 80);
    root = insert(root, 10);
    root = insert(root, 75);

    inorderTraversal(root);
    cout << "\nroot: " << root->data<< endl;

    if(search(root, 35) == NULL)
    {
        cout << "not found";
    }    
    else
    {
        cout << "found";
    }

}

