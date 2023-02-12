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
    格式说明由“％”和格式字符组成，如％d％f等。它的作用是将输出的数据转换为指定的格式输出。格式说明总是由“％”字符开始的。 

    格式字符有d,o,x,u,c,s,f,e,g等。 
    如

    ％d整型输出，％ld长整型输出，

    ％o以八进制数形式输出整数，

    ％x以十六进制数形式输出整数，或输出字符串的地址。

    ％u以十进制数输出unsigned型数据(无符号数)。注意：%d与%u有无符号的数值范围，也就是极限的值，不然数值打印出来会有误。

    ％c用来输出一个字符，

    ％s用来输出一个字符串，

    ％f用来输出实数，以小数形式输出，默认情况下保留小数点6位。

    %.100f用来输出实数，保留小数点100位。

    ％e以指数形式输出实数，

    ％g根据大小自动选f格式或e格式，且不输出无意义的零。
    ————————————————
    版权声明：本文为CSDN博主「悟-静」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
    原文链接：https://blog.csdn.net/qq_32365567/article/details/55045942
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