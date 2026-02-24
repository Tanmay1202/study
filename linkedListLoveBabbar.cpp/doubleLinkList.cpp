#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

Node* insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    if(head!=NULL)
    {
        head->prev = temp;
        return head;
    }
    temp->next = head;
    head = temp;
    return head;
}

Node* insertAtTail(Node* &head, int d)
{
    Node* newNode = new Node(d);
    if(head==NULL)
    {
        head = newNode;
        return head;
    }
    else
    {
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    return head;
}

Node* insertAtPos(Node* &head, int pos,int d)
{
    if(pos == 1)
    {
        insertAtHead(head, d);
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    if(nodetoinsert->next != NULL)
    {
        nodetoinsert->next->prev = nodetoinsert;
    }
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;

    return head;
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
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    print(head);

    insertAtPos(head, 3, 30);

    print(head);



}