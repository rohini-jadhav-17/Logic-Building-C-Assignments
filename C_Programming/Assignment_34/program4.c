//! Write a program which returns largest element from singly linear linked list.
/*
Input LinkedList : |110|->|230|->|320|->|240|
Output : 320
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
int Maximum(PNODE first)
{
    int iMax = 0;

    iMax = first->data;
    
    while(first != NULL)
    {
        if(first->data > iMax)
        {
            iMax = first->data;
        }
        first = first->next;
    }
    return iMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 240);
    InsertFirst(&head, 320);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    iRet = Maximum(head);
    printf("Maximum element: %d", iRet);
    
    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity