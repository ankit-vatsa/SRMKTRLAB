/* Below is the simple example code for learning Linked List concept. */

#include <stdio.h>
#include <stdlib.h>

struct Ankit{
    int data;
    struct Ankit* next;
};

void printall(struct Ankit* term)
{
    while(term!=NULL)
    {
        printf("Elements of the Linked lists are : %d\n",term->data);
        term=term->next;
    }
}

int main() {
 
struct Ankit *head;
struct Ankit *second;
struct Ankit *third;
struct Ankit *fourth;
 
//We can use typedef also to reduce the lines of code and repeating the same code for declaring pointer.
//typedef struct Ankit* ptr;

//ptr head,second,third,fourth;

head = (struct Ankit*) malloc(sizeof(struct Ankit));
second = (struct Ankit*) malloc(sizeof(struct Ankit));
third = (struct Ankit*) malloc(sizeof(struct Ankit));
fourth = (struct Ankit*) malloc(sizeof(struct Ankit));

head->data = 21;
head->next = second;

second->data = 42;
second->next = third;

third->data = 63;
third->next = fourth;

fourth->data = 84;
fourth->next = NULL;

printf("Hello world\n\n");

printall(head);

    return 0;
}
