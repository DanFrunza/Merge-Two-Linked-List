# Program to Merge and Sort Linked Lists
# Overview:
This program implements basic operations on singly linked lists, with the following functionalities:

1.Add elements (push) to the beginning of a list.
2.Display the contents of a linked list.
3.Sort a linked list using the Bubble Sort algorithm.
4.Merge two sorted linked lists into a new sorted list.
5.Remove the first element from a list (pop).
6.The program creates two singly linked lists, sorts them, and then merges them into a new sorted list.

# Program Structure:
1.File main.c
This is the main entry point of the program and contains the logic to create, sort, and merge the linked lists.

2.File utilities.h
Function declarations are stored in a separate header file to maintain the modularity of the code.

3.File utilities.c
This file contains the actual implementations of the utility functions declared in utilities.h. These include:

3.1.createNode(int data): Creates a new node with the given data.
3.2.push(Node** head, int data): Adds a new node to the beginning of the list.
3.3.showList(Node** head): Displays the entire linked list.
3.4.pop(Node** head): Removes the first node from the list.
3.5.sortList(Node** list): Sorts the linked list using the bubble sort algorithm.
3.6.mergeSortedLists(Node* head1, Node* head2): Merges two sorted linked lists into one.

# Execution Steps:
1.Creating the lists:

The program creates two singly linked lists:
First list: 1 -> 3 -> 5 -> NULL
Second list: 2 -> 4 -> 6 -> NULL

2.Sorting the lists:

The lists are sorted using the sortList function.

3.Merging the lists:

The sorted lists are merged using the mergeSortedLists function.

4.Displaying the results:

The program displays each list before and after sorting, as well as the merged sorted list.

# Expected output:
List 1: 
1 -> 3 -> 5 -> NULL

Sorted List 1: 
1 -> 3 -> 5 -> NULL

List 2: 
2 -> 4 -> 6 -> NULL

Sorted List 2: 
2 -> 4 -> 6 -> NULL

Merged List: 
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL

List 1: 
1 -> 3 -> 5 -> NULL

List 2: 
2 -> 4 -> 6 -> NULL

# Notes:
Sorting and Merging: The mergeSortedLists function does not modify the original lists; it creates a new sorted merged list.
Optimization: The sorting algorithm could be improved for better efficiency, such as using merge sort for faster sorting in linked lists.

# Compilation:
To compile and run the program, use the following commands (in a system with GCC installed):

1. gcc main.c utilities.c -o program

2. ./program