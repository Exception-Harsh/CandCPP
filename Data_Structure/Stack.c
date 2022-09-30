#include <stdio.h>
#include <stdlib.h>
int stack[100], top, maxSize, i;

void display();
void pop();
void push();
void peek();

int main()
{
    top = -1;
    printf("Enter size of stack: ");
    scanf("%d", &maxSize);
    stack[maxSize];
    int choice;

    printf("*************MENU**************\n");
    printf("\n\t 1: Push\n\t 2: Pop\n\t 3: Display\n\t 4: Peek\n\t 5: exit\n");

    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;

        default:
            printf("Wrong choice! Try Again");
            break;
        }
    } while (choice != 5);
    return 0;
}

void push()
{
    int data;
    if (top < maxSize - 1)
    {
        printf("Enter Element to be pushed in Stack: ");
        scanf("%d", &data);
        top++;
        stack[top] = data;
    }
    else
    {
        printf("Stack is already full\n");
    }
}

void pop()
{
    if (top > -1)
    {

        printf("%d is removed from stack ", stack[top]);
        top--;
    }
    else
        printf("Stack is Empty\n");
}

void display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}

void peek()
{
    printf("%d", stack[top]);
}
