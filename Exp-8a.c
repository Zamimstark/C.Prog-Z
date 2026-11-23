
// Exp no. 08
// Algorithm

#include <stdio.h>

int main()
{
    // Initializing variables.
    char str[100];
    int i, length = 0;

    // Accepting input.
    printf("Enter a string: ");
    scanf("%99s", str);

    // Counting the length using for loop.
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    // Displaying the length.
    printf("\nLength of input string: %d\n", length);

    return 0;
}
