#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};
struct Node *start = NULL;

void createList()
{
    if (start == NULL)
    {
        int size;
        printf("Enter the size of Linked list to be created: ");
        scanf("%d", &size);

        if (size != 0)
        {
            int data;
            struct Node *newnode = malloc(sizeof(struct Node));
            start = newnode;
            struct Node *temp = start;

            printf("Enter Number to be inserted: ");
            scanf("%d", &data);
            start->data = data;

            for (int i = 2; i <= size; i++)
            {
                newnode = malloc(sizeof(struct Node));
                temp->link = newnode;
                printf("\nEnter number to be inserted : ");
                scanf("%d", &data);
                newnode->data = data;
                temp = temp->link;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}