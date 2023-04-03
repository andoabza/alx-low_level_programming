#include<stdio.h>
#include<stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int main ()
{
  void print_data(struct node *head)
  {
    if (head==NULL)
      printf("linked list is empty");
    struct node *next=NULL;
    next = head;
    while(next !=NULL) {
	printf("%d",next->data)
        next = next->link
	  }
  }
}
