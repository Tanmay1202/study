class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node* head = NULL;
        Node* tail = NULL; // Maintain a pointer to the tail

        for(int i = 0; i < arr.size(); i++) {
            Node* newNode = new Node(arr[i]);
            if (head == NULL) {
                head = newNode; // Initialize head for the first node
                tail = newNode; // Tail is also the first node
            } else {
                tail->next = newNode; // Attach newNode to the end
                tail = newNode; // Update tail
            }
        }
        return head;
    }
};
