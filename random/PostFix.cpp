//postfix operation using stacks

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

struct Stack
{
    int top;
    int arr[MAX];
};


void initStack(struct Stack* stack)
{
    stack->top = -1;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

int isFull(struct Stack* stack)
{
    return stack->top == MAX-1;
}

void push(struct Stack* stack, int value)
{
    if(isFull(stack))
    {
        printf("cannot insert new element as stack is full");
        return;
    }
    
    //printf("element insert in the stack %d\n", value);
    stack->arr[++stack->top] = value;
}


int pop(struct Stack* stack)
{
    if(isEmpty(stack))
    {
        printf("Cannot pop any element as stack is empty");
        return -1;
    }
    
    return stack->arr[stack->top--];
}

int peek(struct Stack* stack)
{
    if(isEmpty(stack))
    {
        printf("Cannot display elements as stack is empty");
        return -1;
    }
    
    return stack->arr[stack->top];
}

int postFixEval(struct Stack* stack, char equation[])
{
    int result = 0;
    for(int i = 0; equation[i] != '\0'; i++)
    {
        char c = equation[i];
        
        if(isdigit(c)) push(stack, c - '0');
        else
        {
            int operand2 = pop(stack);
            int operand1 = pop(stack);
            switch (c)
            {
                case '+':
                    result = operand1 + operand2;
                    push(stack, result);
                    break;
                case '-':
                    result = operand1 - operand2;
                    push(stack, result);
                    break;
                case '*':
                    result = operand1 * operand2;
                    push(stack, result);
                    break;
                case '/':
                    result = operand1 / operand2;
                    push(stack, result);
                    break;
            }
            
        }
    }
    
    return pop(stack);
}
int main(void)
{
    struct Stack stack;
    initStack(&stack);
    
    int result = 0;
    char equation[MAX];
    
    char c = getchar();
    int i = 0;
    
    while(c != '\n')
    {
        equation[i++] = c;
        c = getchar();
    }
    
    equation[i] = '\0';
    
    printf("Result is : %d\n", postFixEval(&stack, equation));
    
}