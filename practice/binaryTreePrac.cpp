class Node
{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

void insert(Node* &root, int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return;
    }

    if(root->left == NULL)
    {
        root->left = new Node(data);
    }
    else if(root->right = NULL)
    {
        root->right = new Node(data);
    }
    else
    {
        insert(root->left, data);
    }
}

void preorder(Node* root, int data)
{
    if(root == NULL)
    {
        return;
    }

    cout << root->data << " "; 
    preorder(root->left, data);
    preorder(root->right, data);
}

void postorder(Node* root, int data)
{
    if(root == NULL)
    return;

    postorder(root->left, data);
    postorder(root->right, data);
    cout << root->data << " ";
}

void inorder(Node* root, int data)
{
    if(root == NULL)
    return;

    inorder(root->left, data);
    cout << root->data << " ";
    inorder(root->right, data);
}