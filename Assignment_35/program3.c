//! Write a program which returns the addition of all even elements from singly linear linked list.
/*
Input LinkedList : |11|->|20|->|32|->|41|
Output : 52
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
int AdditionEven(PNODE first)
{
    int iSumEven = 0;

    while(first != NULL)
    {
        if((first->data) % 2 == 0)
        {
            iSumEven = iSumEven + first->data;
        }
        first = first->next;
    }
    return iSumEven;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
   
    InsertFirst(&head, 41);
    InsertFirst(&head, 32);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    iRet = AdditionEven(head);
    printf("Addition of even elements : %d",iRet);
    
    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity