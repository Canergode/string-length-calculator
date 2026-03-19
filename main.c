#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*Example with hardcoded string(commented out):
    char message[100]="Hello";
    printf("Length of the string:%d",strlen(message));*/

    char message[100];

    // Get string input from user
    printf("Enter a string:\n");

    // fgets is used instead of scanf to allow spaces input
    fgets(message,100,stdin);

    // Print the length of the string
    printf("Length of the string:%d",strlen(message));

    return 0;
}
