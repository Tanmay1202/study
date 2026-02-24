void enqueue(struct Node** head, int data, int priority)
{
    struct Node* newNode = createNode(data, priority);

    if(*head == NULL || (*head) -> priority > priority)
    {
        newNode -> next = *head;
        *head = newNode;
    }
    else
    {
        struct Node* temp = *head;
        while(temp->next != NULL && temp->next->priority <= priority)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void dequeue(struct Node**head)
{
    if(*head == NULL)
    {
        printf("Priority Queue is empty\n");
        return;

    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

int isEmpty(struct Node* head)
{
    return head == NULL;
}