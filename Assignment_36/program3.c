//! Write a program which display product of all digits of all element from singly linear linked list. (Dont consider 0)
/*
Input LinkedList : |11|->|20|->|32|->|41|
Output : |1|->|2|->|6|->|4|
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
void DisplayProduct(PNODE first)
{
    int iDigit = 0, iProd = 1;

    while(first != NULL)
    {
        while(first->data != 0)
        {
            //remainder
            iDigit = (first->data) % 10;
            first->data = (first->data) / 10;

            if(iDigit != 0)
            {
                iProd = iProd * iDigit;
            }
        }
        printf("%d \t", iProd);
        first = first->next;
        //reset iProd
        iProd = 1;
    }
}

int main()
{
    PNODE head = NULL;
   
    InsertFirst(&head, 41);
    InsertFirst(&head, 32);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    DisplayProduct(head);
    
    return 0;
}

// * Time Complexity : O(N*M)
// * N,M is a natural number
// * Where N,M >= 0 and N,M <= Infinity