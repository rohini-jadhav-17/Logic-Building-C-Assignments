// !Write application which accept the file name from the user and display size of the file.
/*
Input   :   Demo.txt
Output  :   File size is 56 bytes
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[50] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the filename to read :\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    // if file is not created then handle it
    if(fd == -1)
    {
        printf("Unable to open the file.");
    }
    else
    {
        printf("File is opened successfully.");
        while((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
        {
           printf("File size is %d bytes", iRet);
        }
        
        close(fd);
    }

    return 0;
}