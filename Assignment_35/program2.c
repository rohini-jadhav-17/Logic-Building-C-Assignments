//! Write a program which displays all elements which are prime from singly linear linked list.
/*
Input LinkedList : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11     17      41      89
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
void DisplayPrime(PNODE first)
{
    int iCnt = 0;
    bool bFlag = false;

    while(first != NULL)
    {
        for(iCnt = 2; iCnt <= (first->data)/2; iCnt++)
        {
            if((first->data) % iCnt == 0)     //means it is factor - not prime
            {
                bFlag = true;
                break;
            }
        }
        if(bFlag == false){
            printf("%d \t",first->data);
        }

        first = first->next;
        bFlag = false;
    }
}

int main()
{
    PNODE head = NULL;
   
    InsertFirst(&head, 89);
    InsertFirst(&head, 22);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    DisplayPrime(head);
    
    return 0;
}

// * Time Complexity : O(N^2)
// * N is a natural number
// * Where N >= 0 and N <= Infinity