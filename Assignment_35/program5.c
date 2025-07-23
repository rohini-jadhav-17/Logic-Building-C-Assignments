//! Write a program which display the addition of digits of element from singly linear linked list.
/*
Input LinkedList : |110|->|230|->|20|->|240|->|640|
Output : 2  5  2  6  10
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
void SumDigit(PNODE first)
{
    int iDigit = 0, iSum = 0;
    while(first != NULL)
    {
        while((first->data) != 0)
        {
            //store remainder
            iDigit = (first->data) % 10;
            first->data = (first->data) /10;

            iSum = iSum + iDigit;
        }
        printf("%d \t", iSum);

        first = first->next;
        //#reset iSum - important
        iSum = 0;
    }
}

int main()
{
    PNODE head = NULL;
   
    InsertFirst(&head, 640);
    InsertFirst(&head, 240);
    InsertFirst(&head, 20);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    SumDigit(head);
        
    return 0;
}

//  * Time Complexity : O(N^2)
//  * N is a natural number
//  * Where N >= 0 and N <= Infinity