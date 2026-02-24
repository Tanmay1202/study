#include <stdio.h>
#include <limits.h>
#define MAX 100

typedef struct{
    int data[MAX];
    int priority[MAX];
    int size;

} PriorityQueue;

void initqueue(PriorityQueue *pq)
{
    pq->size=0; 
}

int isEmpty(PriorityQueue *pq)
{
    return pq->size == 0;
}

int isFull(PriorityQueue *pq)
{
    return pq->size==MAX;
}

void enqueue(PriorityQueue *pq, int value, int priority)
{
    if(isFull(pq))
    {   printf("Priority Queue is full\n");
        return;
    }
    pq->data[pq->size]=value;
    pq->priority[pq->size]=priority;
    pq->size;
}

int getHighestPriorityIndex(PriorityQueue *pq)
{
    int maxPriority = INT_MIN;
    int index = -1;


for(int i=0; i<pq->size; i++)
{
    if(pq->priority[i] > maxPriority){
        maxPriority = pq->priority[i];
        index = i;
    }
}
return index;

}

if dequeue(PriorityQueue *pq)
{
    if(isEmpty(pq))
    {
        printf("Priority Queue is empty\n");
        return -1;
    }

    int index = getHighestPriorityIndex(pq);
    int value = pq->data[index];

    for(int i=index; i<pq->size-1; i++)
    {
        pq->data[i] = pq->data[i+1];
        pq->priority[i] = pq->priority[i+1];
    }
    pq>size--;
    return value;
}

void display

