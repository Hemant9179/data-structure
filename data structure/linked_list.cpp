#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and third nodes

    second->data = 12;
    second->next = third;

    third->data = 56;
    third->next = fourth;

    // link first and second nodes
    fourth->data = 13;
    fourth->next = NULL;

    linkedlistTraversal(head);
    return 0;
}