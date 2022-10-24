#include <stdio.h>

#define CONSTSTR "This is a constant string"

int main(void)
{   
    char str1[] = "To be or not to be";
    char str2[] = ", that is the question";
    unsigned int count = 0;
    const char str3[] = "This is a const string2";

    while(str1[count] != '\0')
        count++;

    printf("The length of the string \"%s\" is %u characters.\n", str1, count);

    count = 0;

    while(str2[count] != '\0')
        count++;

    printf("The length of the string \"%s\" is %u characters.\n", str2, count);

    return 0;
}