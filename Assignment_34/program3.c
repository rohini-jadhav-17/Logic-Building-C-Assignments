//! Write a program which returns addition of all element from singly linear linked list.
/*
Input LinkedList : |10|->|20|->|30|->|40|
Output : 100
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)      //*LL is empty
    {
        *first = newn;
    }
    else                    //*LL contains atleast 1 node
    {
        newn->next = *first;
        *first = newn;
    }
}
int Addition(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        iSum = iSum + first->data;
        first = first->next;
    }
    return iSum;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    iRet = Addition(head);
    printf("Addition of elements: %d", iRet);
    
    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity