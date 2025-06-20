// !Write a program which accepts filename and one character from the user and count the number of occurrences of that characters from that file.
/*
Input   :   Demo.txt        'M'
Output  :   Frequency of M is ..
*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountChar(char Fname[], char ch)
{
    int fd = 0, iCount = 0, iRet = 0, iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    
    // open file in read mode
    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("File is opened successfully.\n");
        // read data into local array
        while((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if(Buffer[iCnt] == ch)
                {
                    iCount++;
                }
            }
        }
       close(fd);
    }
    return iCount;
}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;
    char cValue = '\0';

    printf("Enter the filename: \n");
    scanf("%s", FileName);

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    iRet = CountChar(FileName, cValue);

    printf("Frequency is %d", iRet);

    return 0;
}