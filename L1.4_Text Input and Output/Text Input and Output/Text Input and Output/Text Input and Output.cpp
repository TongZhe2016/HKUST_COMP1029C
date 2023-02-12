#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
/*
Placeholder	Description	                                    Example Code	                Example Code Output
%d	        An integer                                      int x = 5;                      x = 5
                                                            printf("x = %d", x);
%f	        A floating-point number with 6 decimal places   float x = 1.5;                  x = 1.500000
                                                            printf("x = %f", x);
%g	        Similar to %f but the trailing zeros (the 0s    float x = 1.5;                  x = 1.5
            displayed at the end of the floating point      printf("x = %g", x);
            number) are not shown
%c	        A character                                     char x = 'G';                   x = G
                                                            printf("x = %c", x);
%s	        A string, i.e. a piece of text                  printf("x = %s", "something");  x = something
*/
    int dogs = 2;
    int cats = 2;
    int fish = 12;
    printf("I have %3d dogs at home.\n", dogs);
    printf("I have %3d cats at home.\n", cats);
    printf("I have %3d fish at home.\n", fish);
    printf("I have %3d pets at home.\n", dogs + cats + fish);
    /*In the code shown above, the placeholders have a 3 between the % and d. The number means the width of the result.
    As you can see, no matter how wide the numbers are, all of them have used up three character spaces in the output.
    If the number has less than three digits, spaces will be added in front of the number to make sure it uses a width
    of three. This is called right justification.

    In some cases, you may want to have left justification, i.e. spaces will be added after the number. You can slightly
    modify the placeholder using a - before the width number, like this:
    */
    int boys = 50, girls = 5;
    printf("Students in an Engineering Class\n\n");
    printf("%-40s:%3d\n", "Number of male students", boys);
    printf("%-40s:%3d\n", "Number of female students", girls);
    printf("%-40s:%3d\n\n\n", "Total number of students", boys + girls);
    int boys2 = 50, girls2 = 5;
    printf("Students in an Engineering Class\n\n");
    printf("%-30s:%3d\n", "Number of male students", boys2);
    printf("%-30s:%3d\n", "Number of female students", girls2);
    printf("%-30s:%3d\n\n", "Total number of students", boys2 + girls2);
    int boys3 = 50, girls3 = 5;
    printf("Students in an Engineering Class\n\n");
    printf("%-10s:%3d\n", "Number of male students", boys3);
    printf("%-10s:%3d\n", "Number of female students", girls3);
    printf("%-10s:%3d\n\n\n", "Total number of students", boys3 + girls3);

    /*
    Getting Input
    We have seen how to output text using printf(). How about getting inputs from users? C provides a function called scanf(), also from the stdio library, to get formatted inputs from users.

    !!!Important!!!
    In Visual Studio Community, the IDE will give you an error if you use scanf(). To avoid having the error, we will use an instruction to disable it:
    #define _CRT_SECURE_NO_WARNINGS 1
    You will not get a similar error if you use other systems or development tool.
    The above instruction will get added to all source files that use the scanf() function.
    */
    int input;

    // Print the prompting text
    printf("Please enter an integer: ");

    // Read the user input into the variable input
    scanf("%d", &input);//means a number will be read from the user and the number will be stored in a variable called input. It is important to note that scanf() requires the use of an ampersand & before a variable. You don't use & for a printf() function.

    // Print out the input value
    printf("You have entered %d.\n", input);
    
    /*
    You can also read a character from the user if you change the placeholder to% c, like this:
    char answer;
    printf("Please enter 'Y' (yes) or 'N' (no): ");
    scanf("%c", &answer);
    printf("You have entered %c.\n", answer);
    */
}