#include <stdio.h>
#include <stdlib.h>
#define Size 10

int Stack[Size];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int data, choice;
    while (1)
    {
        printf("1 - Push\n2 - Pop\n3 - Display\n4 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Data: ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Enter Valid Choice");
            break;
        }
    }
}

void push(int data)
{
    if (top == Size - 1)
        printf("Stack is Full\n");

    else
    {
        top = top + 1;
        Stack[top] = data;
    }
}

void pop()
{
    if (top == -1)
        printf("Stack is Empty\n");

    else
    {
        printf("Data: %d\n", Stack[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
        printf("Stack is Empty\n");

    else
    {
        for (int i = top; i > -1; i--)
        {
            printf("%d ", Stack[i]);
        }
        printf("\n");
    }
}