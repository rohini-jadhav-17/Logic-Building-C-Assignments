//! Write a program which reverse each element of singly linear linked list.
/*
Input LinkedList : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|
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
void Reverse(PNODE first)
{
    int iDigit = 0, iRev = 0;

    while(first != NULL)
    {
        while(first->data != 0)
        {
            //remainder
            iDigit = (first->data) % 10;
            first->data = (first->data) / 10;

            iRev = iRev*10 + iDigit;
        }
        printf("%d \t", iRev);
        first = first->next;
        //reset iRev
        iRev = 0;
    }
}

int main()
{
    PNODE head = NULL;
   
    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);

    Reverse(head);
    
    return 0;
}

// * Time Complexity : O(N*M)
// * N,M is a natural number
// * Where N,M >= 0 and N,M <= Infinity