//! Write a program which display Largest digits of all element from singly linear linked list
/*
Input LinkedList : |11|->|250|->|532|->|419|
Output : |1|->|5|->|5|->|9|
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
void DisplayLarge(PNODE first)
{
    int iDigit = 0, iLarge = 0;

    while(first != NULL)
    {
        //store first compring digit
        iLarge = (first->data) % 10;

        while(first->data != 0)
        {
            //remainder
            iDigit = (first->data) % 10;
            first->data = (first->data) / 10;

            //if stored digit is smaller than iDigit replace
            if(iLarge < iDigit)
            {
                iLarge = iDigit;
            }            
        }
        printf("%d \t", iLarge);
        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;
   
    InsertFirst(&head, 419);
    InsertFirst(&head, 532);
    InsertFirst(&head, 250);
    InsertFirst(&head, 11);

    DisplayLarge(head);
    
    return 0;
}

// * Time Complexity : O(N*M)
// * N,M is a natural number
// * Where N,M >= 0 and N,M <= Infinity