#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    /*
    While Loop
    */
    // Takes the amount of money the user has and then buy as many chocolate
    // bars as possible.

    // Ask for the amount of money
    printf("Please enter the amount of money you have: ");
    int amount;
    scanf("%d", &amount);

    int bigbars = 0, smallbars = 0;

    // While there is enough money to buy at least one small chocolate bar...
    while (amount >= 2) {
        // Buy a big chocolate bar if there is at least $5 left
        if (amount >= 5) {
            bigbars++;
            amount = amount - 5;
        }
        // Buy a small chocolate bar if there is not enough money for a big bar
        else {
            smallbars++;
            amount = amount - 2;
        }
    }

    printf("You can buy %d big chocolate bar(s) and %d small chocolate bar(s).\n",
        bigbars, smallbars);

    /*
    Do While Loop
    */
    // This program shows a smiley the user has selected from a menu

    int smiley;
    do {
        // Ask the user to select a smiley
        printf("Which smiley do you want to see (or select 6 to quit)?\n\n");
        printf("1) Happy\n");
        printf("2) Sad\n");
        printf("3) Winking\n");
        printf("4) Surprised\n");
        printf("5) Tongue Out\n");
        printf("6) Quit the program.\n");
        printf("\nSelect: ");

        // Get the selection
        scanf("%d", &smiley);

        // Print the smiley
        printf("\n");
        switch (smiley) {
        case 1:
            printf(":)");
            break;
        case 2:
            printf(":(");
            break;
        case 3:
            printf(";)");
            break;
        case 4:
            printf(":o");
            break;
        case 5:
            printf(":p");
            break;
        case 6:
            printf("Bye bye!");
            break;
        default:
            printf("What? (@_@)");
        }
        printf("\n\n");
    } while (smiley != 6); // Stop only if the user selects 6


}