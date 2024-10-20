#ifndef UTILITIES_H
#define UTILITES_H

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createNode(int data);
void push(Node** head, int data);
void showList(Node** head);
void pop(Node** head);
Node* mergeSortedLists(Node* head1, Node* head2);
void sortList(Node** list);


#endif