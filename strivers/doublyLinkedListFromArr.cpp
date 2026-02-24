class Solution {
  public:
    Node* constructDLL(vector<int>& arr)
    {
        Node* head = NULL;
        Node* tail = NULL;
        for(int i=0; i<arr.size(); i++)
        {
            Node* newNode = new Node(arr[i]);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            }
        }
        return head;
    }
};