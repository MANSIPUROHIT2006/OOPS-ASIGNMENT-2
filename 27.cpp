// Create a program that takes two integers as command line arguments and prints their sum

#include <stdio.h>
#include <stdlib.h> // For atoi() function

int main(int argc, char *argv[])
{
    // Check if two arguments are passed
    if (argc != 3)
    {
        printf("Please provide exactly two integers as arguments.\n");
        return 1;
    }

    // Convert arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0;
}
