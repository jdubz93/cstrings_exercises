#include <stdio.h>
#include <string.h>

int main(void)
{
    char myString[] = "This is a test";

    printf("The length of the string: %d\n", strlen(myString));


    char src[50], dest[50];

    /* Note: strcpy does not check sizes. */
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    printf("After strcpy dest = %s\n", dest);

    /* Note: strncpy is safe. Because it takes a 3rd argument the maximum number of chars to copy */
    char src2[40];
    char dest2[12];

    memset(dest2, '\0', sizeof(dest2));
    strcpy(src2, "Hello how are you doing");
    strncpy(dest2, src2, 24);
    printf("After strncpy dest2 = %s\n", dest2);

    return 0;
}