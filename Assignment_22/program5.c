// !Accept division of student from user and depends on the division display exam timing. There are four divisions in school as A, B, C, D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)

/*
Input   :   C
Output  :   Your exam at 9.20 AM
            
Input   :   d
Output  :   Your exam at 10.30 AM
*/

#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char ch)
{
    int iCnt = 0;
    bool bFlag = false;
    
    if((ch == 'a') || (ch == 'A'))
    {
        printf("Your exam at 7 AM");
    }
    else if((ch == 'b') || (ch == 'B'))
    {
        printf("Your exam at 8.30 AM");
    }
    else if((ch == 'c') || (ch == 'C'))
    {
        printf("Your exam at 9.20 AM");
    }
    else if((ch == 'd') || (ch == 'D'))
    {
        printf("Your exam at 10.30 AM");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division :\n");
    scanf("%c", &cValue);
        
    DisplaySchedule(cValue);

    return 0;
}
