#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head =  temp;
    return head;
}

Node* insertAtTail(Node* &head, int d)
{
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    Node* newNode = new Node(d);
    temp->next = newNode;
    return head;
}

Node* insertAtPos(Node* &head, int pos, int d)
{
    if(pos==1)
    {
        insertAtHead(head, d);
        return head;
    }

    Node* temp = head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    return head;

}

Node* deleteAtPos(Node* &head, int pos)
{
    if(pos == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node* prev = NULL;
        Node* curr = head;
        int cnt=1;
        while(cnt<pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int countEven(Node* head) {
    int count = 0;
    while (head != nullptr) {
        if (head->data % 2 == 0) {
            count++;
        }
        head = head->next;
    }
    return count;
}

bool search(Node* head, int key)
{
    if(head == NULL)
    return false;
    
    if(key == head->data)
    return true;

    return search(head->next, key);
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* node = new Node(10);
    Node* head = node;

    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    insertAtTail(head, 70);

    print(head);

    insertAtPos(head, 4, 40);
    insertAtPos(head, 8, 80);

    print(head);

    
    deleteAtPos(head, 6);
    deleteAtPos(head, 1);


    print(head);

    //deleteAtPos(head, 6);

    //print(head);

}