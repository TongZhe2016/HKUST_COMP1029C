#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // Ask for an input number
    printf("Please enter a number: ");

    // Read the input number into a variable
    int x;
    scanf("%d", &x);

    // Test the size of the number
    if (x >= 100) {
        printf("You have entered a number bigger than or equal to 100.\n");
        printf("Wow, that is a big number!\n");
    }
    else {
        printf("You have entered a number smaller than 100.\n");
        printf("Oops! That is a small number.\n");
    }
    // Read a number and then tells the user whether the number is a prime or not

    printf("Please enter a number between 1 to 10: ");

    // Read the number to a variable
    int number;
    scanf("%d", &number);

    // Test whether the number is a prime or not
    if (number == 2 || number == 3 || number == 5 || number == 7) {
        printf("Your number is a prime number!\n");
    }
    else {
        printf("Your number is not a prime number!\n");
    }
    /*
    In the above example, || means using a logical or operation to combine the conditions.
    So the condition in the if statement means 2 or 3 or 5 or 7. To use the logical and
    operation you put && between the conditions.
    */

    // This function takes two numbers as input and does something silly and useless.
    // Read two numbers
    printf("Please enter two numbers: ");
    int y;
    scanf("%d %d", &x, &y);

    // Do something silly
    int z;
    if (x < y) {
        z = 2 * y;
        printf("%d\n", z);
    }
    else if (x == y) {
        z = 3 * y;
        printf("%d\n", z);
    }
    else
        printf("0\n");
    // Ask for a number
    printf("Please enter a number between 0 to 9: ");
    int digit;
    scanf("%d", &digit);

    // Convert the number to an English word
    switch (digit) {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    default:
        printf("Hey, the number is not in the range 0 to 9!\n");
    }
}
/*
As you can see the above example has a pair of curly braces, i.e. { and },
enclosing the statements after if and else. These braces are required when
you want to put more than one line of code there. If you don't, C has no way
to know the lines of code are together for the if and else.
*/