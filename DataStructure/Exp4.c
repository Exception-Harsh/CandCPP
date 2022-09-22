#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
} *top;

void
initialize ()
{
  top = NULL;
}

int
peek ()
{
  return top->data;
}

int
isEmpty ()
{
  if (top == NULL)
    return 1;
  else
    return 0;
}

int
getStackSize (struct node *head)
{
  if (head == NULL)
    {
      printf ("Error : Invalid stack pointer !!!\n");
    }
  int length = 0;
  while (head != NULL)
    {
      head = head->next;
      length++;
    }
  return length;
}

void
push (int num)
{
  struct node *temp;
  temp = (struct node *) malloc (1 * sizeof (struct node));
  temp->data = num;

  if (top == NULL)
    {
      top = temp;
      top->next = NULL;
    }
  else
    {
      temp->next = top;
      top = temp;
    }
}

void
pop ()
{
  struct node *temp;
  if (isEmpty (top))
    {
      printf ("\nStack is Empty\n");
      return;
    }
  else
    {
      temp = top;
      top = top->next;
      printf ("Removed Element : %d\n", temp->data);
      free (temp);
    }
}

void
printStack (struct node *nodePtr)
{
  while (nodePtr != NULL)
    {
      printf ("%d", nodePtr->data);
      nodePtr = nodePtr->next;
      if (nodePtr != NULL)
	printf ("-->");
    }
  printf ("\n");
}

int
main ()
{
  initialize ();

  push (1);
  push (2);
  push (3);
  push (4);

  printf ("Stack Size : %d\n", getStackSize (top));
  printf ("\nTop Element : %d\n", peek ());
  printf ("Stack as linked List\n");
  printStack (top);

  pop ();
  pop ();
  pop ();
  pop ();
  pop ();
  printStack (top);

  return 0;
}
