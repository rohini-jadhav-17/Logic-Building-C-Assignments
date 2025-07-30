// !Write a program which accepts filename from the user and count the number of small characters from that file.
/*
Input   :   Demo.txt
Output  :   Number of small characters are ..
*/

#include<stdio.h>
#include<io.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountSmall(char Fname[])
{
    int fd = 0, iCountSmall = 0, iRet = 0, iCnt = 0;
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
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iCountSmall++;
                }
            }
        }
       close(fd);
    }
    return iCountSmall;
}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter the filename: \n");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);

    printf("Number of small Characters are %d", iRet);

    return 0;
}