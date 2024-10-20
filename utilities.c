#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"


Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void push(Node** head, int data)
{
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void showList(Node** head)
{
    Node* current = *head;
    printf("\nLista: ");
    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void pop(Node** head)
{
    Node* intermediar = *head;
    *head = (*head)->next;
    free(intermediar);
}

void sortList(Node** list) {
    if (*list == NULL) {
        return; 
    }

    Node* a;
    Node* b;
    int swapped;

    do {
        swapped = 0; 
        a = *list;   

        while (a->next != NULL) {
            b = a->next;

            if (a->data > b->data) {
                
                int temp = a->data;
                a->data = b->data;
                b->data = temp;
                swapped = 1; 
            }

            a = a->next; 
        }
    } while (swapped); 
}


Node* mergeSortedLists(Node* head1, Node* head2) {
    Node* mergedList = NULL;
    Node* list1 = head1;
    Node* list2 = head2;

    while(list1 != NULL && list2 != NULL)
    {
        if(list1->data < list2->data)
        {
            push(&mergedList, list1->data);
            list1 = list1->next;
        }
        else
        {
            push(&mergedList, list2->data);
            list2 = list2->next;
        }

        
    }

    if(list1 != NULL)
    {
        while(list1 != NULL)
        {
            push(&mergedList, list1->data);
            list1 = list1->next;
        }
        
    }
    else
    {
        while(list2 != NULL)
        {
            push(&mergedList, list2->data);
            list2 = list2->next;
        }
    }

    return mergedList;

}