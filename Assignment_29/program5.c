// !Write a program which accepts filename and one count from the user and read that number of characters from starting position.
/*
Input   :   Demo.txt        12
Output  :   Display first 12 characters from Demo.txt
*/

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[], int iSize)
{
    int fd = 0, iRet = 0, iCnt = 0;
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
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                printf("%c", Buffer[iCnt]);
            }
        }
       close(fd);
    }
}

int main()
{
    char FileName[30] = {'\0'};
    int iValue = 0;

    printf("Enter the filename: \n");
    scanf("%s", FileName);

    printf("Enter the number of characters\n");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}