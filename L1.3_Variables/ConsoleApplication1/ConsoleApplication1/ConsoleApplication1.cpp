#include <stdio.h>

int main()
{
    int weekdays, weekend, daysinweek; //The datatype is int
    weekdays = 5;
    weekend = 2;
    daysinweek = weekdays + weekend;
    /*
    Here are some of the commonly used data types:

    Data Type Name	Description	                                                                                    Example Values
    char	        A single character, i.e. alphabets, numbers or other symbols you can find on your keyboard	    'A', 'b' and '$'
    int             An integer number, i.e. numbers without a decimal place	                                        5, 100 and 32768
    float	        A floating number, i.e. real numbers with a fractional part or a decimal place	                1.2, 6.0 and 3.1415
    double	        A floating number with a doubly higher precision than float	                                    5.12459831 and 6.89

    When putting a character to a variable of the char data type, the character is enclosed by a pair of single quotes '.
    This is different from the double quotes " used by a piece of text with more than one characters, i.e. "How are you?",
    as you have seen earlier.

    A variable of the float data type can store a real number with up to roughly 7 significant digits, i.e. 3.141592. If
    you want to have more digits you will need to use the double data type that can hold a real number of up to roughly 15
    significant digits, i.e. 3.14159265358979.
    */
    char   name_initial = 'D';
    int    weight_in_lb = 200;
    double lb_to_kg = 0.45359237;
    double weight_in_kg = weight_in_lb * lb_to_kg;
    int    height_in_cm = 170;
    float  height_in_m = height_in_cm / 100.0;
    double bmi = weight_in_kg / (height_in_m * height_in_m);

    printf("Hello! I am %c.\n", name_initial);
    printf("\n");
    printf("My weight (kg) is: %f\n", weight_in_kg);
    printf("My height (cm) is: %d\n", height_in_cm);
    printf("My BMI is: %f\n", bmi);
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
    int number_of_computers;
    number_of_computers = 40.5; //What will happen?
    printf("The number of computers in our lab is %d\n", number_of_computers); //The answer will be 40!
    /*
    To warn you about the loss of data (the fractional part) C will give you a warning if you build a program which has this issue. The warning looks like this:
    warning C4244: '=' : conversion from 'double' to 'int', possible loss of data
    
    !!!IMPORTANT!!!
    Why does the above message say from double to int? This is because C treats any number with a decimal component as a 'double' value.
    To tell C that you are using a 'float' value you can put an f at the end of the number, like this:
    float weight = 70.8f;
    !!!IMPORTANT!!!

    */

    /*Integer Division*/
    float result = 5/2; //Your intuitive might tell you that the result is 2.5, so let's test it out!
    printf("The result is %f\n", result); //Even though I set it as '%f', the result is still 2.000000! That's because the '5' and '2'.
    float result2 = 5.0 / 2;
    printf("The result is %f\n", result2); //Now the result is 2.50000! Let's test out more!
    float result3 = 5.000 / 2.0;
    printf("The result is %f\n", result3);//The result is still 2.50000.

}