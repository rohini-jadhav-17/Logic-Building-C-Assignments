//! Write a program which return the second maximum element from singly linear linked list.
/*
Input LinkedList : |110|->|230|->|320|->|240|
Output : 240
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
/*
    START
        Take two variables - one for storing max value(iMax) and other for storing second max value(iSecMax)
        store first node value in iMax
        store second node values in iSecMax
        change pointer to 3rd node
        while first != NULL
            if node value > iMax
                iSecMax = iMax
                iMax = node value
            else if node value > iSecMax
                iSecMax = node value

            change pointer to next
        
        return iSecMax
    STOP

*/
/////////////////////////////////////////////////////////////////////////////
//
//  File name   : program4.c
//  Description : Used to find second largest number in LinkedList
//  Author      : Rohini Popat Jadhav
//  Date        : 23/07/2025
//
/////////////////////////////////////////////////////////////////////////////
int SecMaximum(PNODE first)
{
    int iMax = 0, iSecMax = 0;

    //save first node value in iMax
    iMax = first->data;

    //save second node value in iSecMax
    iSecMax = first->next->data;

    //move pointer to 3rd node
    first = first->next->next;

    while(first != NULL)
    {
        if(first->data > iMax)
        {
            iSecMax = iMax;
            iMax = first->data;
        }
        else if(first->data > iSecMax)
        {
            iSecMax = first->data;
        }
        first = first->next;
    }

    return iSecMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
   
    InsertFirst(&head, 240);
    InsertFirst(&head, 320);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    iRet = SecMaximum(head);
    printf("Second largest value in Linked List : %d",iRet);
    
    return 0;
}

//  * Time Complexity : O(N)
//  * N is a natural number
//  * Where N >= 0 and N <= Infinity