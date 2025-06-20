// !Write application which accept the file name from the user and create that file.
/*
Input   :   Demo.txt
Output  :   File created successfully
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[50] = {'\0'};
    int fd = 0;

    printf("Enter the filename to create:\n");
    scanf("%s", Fname);

    fd = creat(Fname, 0777);

    // if file is not created then handle it
    if(fd == -1)
    {
        printf("Unable to open the file.");
        return -1;
    }
    
    printf("File is created successfully.");

    return 0;
}