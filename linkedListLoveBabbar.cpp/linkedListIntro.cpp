#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

Node* insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
    return head;
}

Node* insertAtTail(Node* &head, int d)
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp  = temp->next;
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
    int cnt = 0;
    while(cnt < pos)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertAtTail(head, d);
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    insertAtTail(head, 12);
    insertAtTail(head, 23);
    insertAtTail(head, 45);
    insertAtTail(head, 56);
    insertAtTail(head, 67);

    print(head);

    insertAtPos(head, 3, 34);

    print(head);

}