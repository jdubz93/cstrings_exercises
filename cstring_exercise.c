#include <stdio.h>
#include <string.h>

int main(void)
{
    char myName[] = "My Name is Josh";
    printf("The length is: %s\n", myName);

    char temp[50];
    strncpy(temp, myName, sizeof(myName));
    printf("My name is: %s\n", temp);

    /* to clear a cstring */
    temp[0] = '\0';
    memset(temp,0,strlen(temp));
    printf("My name is: %s\n", temp);
    /* if the string is a static array use this: */
    // memset(buffer,0,sizeof(buffer));

    /* re-set the name variable in tmp */
    temp[50];
    strncpy(temp, myName, sizeof(myName));
    printf("My name is: %s\n", temp);


    return 0;
}