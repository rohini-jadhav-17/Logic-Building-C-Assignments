//! Write a program which displays all elements which are perfect from singly linear linked list.
/*
Input LinkedList : |11|->|28|->|17|->|41|->|6|->|89|
Output : 28     6
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
void DisplayPerfect(PNODE first)
{
    int iSum = 0, iCnt = 0;

    while(first != NULL)
    {
        for(iCnt = 1; iCnt <= (first->data)/2; iCnt++)
        {
            if((first->data) % iCnt == 0)     //means it is factor
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == (first->data))
        {
            printf("%d \t",first->data);
        }
        first = first->next;
        iSum = 0;
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

    DisplayPerfect(head);
    
    return 0;
}

// * Time Complexity : O(N^2)
// * N is a natural number
// * Where N >= 0 and N <= Infinity