#include<stdio.h>
#include<stdlib.h>
    


struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
    printf("Element :%d\n",ptr->data);
        ptr = ptr->next;
    }
}


int main()
{
    int position;
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *newnode;
    struct node *fourth;
    
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    newnode=( struct node *)malloc(sizeof(struct node) );
    fourth=( struct node *)malloc(sizeof(struct node) );

   
    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and third nodes
    second->data = 12;
    second->next = third;

    // link first and second nodes
    third->data = 13;
    third->next = fourth;


fourth->data = 20;
    fourth->next =NULL;
    
//insert at first
    newnode->data=4;
    newnode->next=head;
    head=newnode;
    linkedlistTraversal(head);

     


    return 0;
}