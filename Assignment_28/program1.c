// !Write application which accept the file name from the user and open that file in read mode.
/*
Input   :   Demo.txt
Output  :   File opened successfully
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[50] = {'\0'};
    int fd = 0;

    printf("Enter the filename to read :\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    // if file is not created then handle it
    if(fd == -1)
    {
        printf("Unable to open the file.");
        return -1;
    }
    else
    {
        printf("File is opened successfully.");   
        close(fd);
    }
    
    return 0;
}