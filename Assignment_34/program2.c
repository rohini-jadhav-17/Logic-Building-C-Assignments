//! Write a program which search last occurrence of particular element from singly linear linked list. Function should return position at which element is found.
/*
Input LinkedList : |11|->|30|->|21|->|51|->|30|->|101|
Input element : 30
Output : 5
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
int SearchLastOcc(PNODE first, int no)
{
    int iIndex = 1, iLastIndex = 0;

    while(first != NULL)
    {
        if(first->data == no)
        {
             iLastIndex = iIndex;
        }
        else
        {
            return -1;
        }
        first = first->next;
        iIndex++;
    }
    return iLastIndex;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 101);
    InsertFirst(&head, 30);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 30);
    InsertFirst(&head, 11);

    iRet = SearchLastOcc(head, 30);
    printf("Last occurrence of element is at index: %d", iRet);
    
    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity