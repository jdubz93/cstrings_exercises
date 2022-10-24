#include <stdio.h>
#include <string.h>

int main(void)
{
    int Number = 25;
    int *pNumber = &Number;
    printf("Number: %d\n", *pNumber);

    /* search for char in string */
    char str[] = "The quick brown fox";
    char ch = 'q';
    char *pFound = NULL;
    pFound = strchr(str, ch);
    if (pFound)
    {
        printf("Found '%c' at position %d\n", ch, pFound - str + 1);
        printf("pFound = %c\n", *pFound);
    } else {
        printf("'%c' not found\n", ch);
    }

    /* search string inside string */
    char str1[] = "The quick brown fox";
    char str2[] = "quick";
    char *pFound2 = NULL;
    pFound2 = strstr(str1, str2);
    if (pFound2)
    {
        printf("Found '%s' at position %d\n", str2, pFound2 - str1 + 1);
        printf("pFound2 = %s\n", pFound2);
    } else {
        printf("'%s' not found\n", str2);
    }

    /* convert to upper case */
    char str3[] = "The quick brown fox";
    int i = 0;
    for(i = 0; (str3[i] = (char)toupper(str3[i])) != '\0'; i++) {
        // do nothing
    }
    printf("str3 = %s\n", str3);

    char substr[] = "THE";
    printf("Searching for: %s\nDiscovered (true/false): %s\n", substr, ((strstr(str3, substr) == NULL) ? "false" : "true"));

    return 0;
}