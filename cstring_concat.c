#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[] = "this is input ";
    char user_data[100];

    printf("Enter some short data: ");
    scanf("%s", user_data);

    strncat(input, user_data, 100);
    printf("input: %s\n", input);


    return 0;
}