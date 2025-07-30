// !Write application which accept the file name from the user and one string from user. Write that string at the end of file.
/*
Input   :   Demo.txt
            Hello World
Output  :   India is my country.Hello World
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[50] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0, iSum = 0;
    char Buffer[] = {'\0'};

    printf("Enter the filename to write :\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDWR | O_APPEND);   

    // if file is not created then handle it
    if(fd == -1)
    {
        printf("Unable to open the file.");
    }
    else
    {
        printf("File is opened successfully.\n");
        printf("Enter the string to write :\n");
    scanf(" %[^'\n']s", Buffer);
        iRet = write(fd, Buffer, strlen(Buffer));
                    
        close(fd);
    }

    return 0;
}