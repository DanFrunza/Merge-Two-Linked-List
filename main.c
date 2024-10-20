#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"

int main()
{
    Node* list1 = NULL;
    Node* list2 = NULL;

    // Creăm prima listă: 1 -> 3 -> 5
    push(&list1, 3);
    push(&list1, 5);
    push(&list1, 1);

    // Creăm a doua listă: 2 -> 4 -> 6
    push(&list2, 4);
    push(&list2, 6);
    push(&list2, 2);

    printf("\nLista 1: \n");
    showList(&list1);

    sortList(&list1);
    printf("\nLista 1 sortata: \n");
    showList(&list1);


    printf("\nLista 2: \n");
    showList(&list2);

    sortList(&list2);
    printf("\nLista 2 sortata: \n");
    showList(&list2);

    // Îmbinăm listele
    Node* mergedList = mergeSortedLists(list1, list2);
    printf("Lista imbinata: ");
    showList(&mergedList);

    printf("\nLista 1: \n");
    showList(&list1);
    printf("\nLista 2: \n");
    showList(&list2);

}