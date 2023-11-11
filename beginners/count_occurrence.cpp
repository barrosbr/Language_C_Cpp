/* 
The program counts the number of times a given digit occurs in a number.
The user enters the number and digit they want to count the number of occurrences. 
*/

#include <stdio.h>
#include <locale.h>

int main() {
    int digit, count = 0;
    long int number;

    printf("Enter an integer number: ");
    scanf("%ld", &number);

    printf("Enter the digit you want to count: ");
    scanf("%d", &digit);

    for (; number != 0; number /= 10) { // number /= 10 -> removes the last digit with each interaction
        int correntDigit = number % 10; // Get the last digit

        if (correntDigit == digit) {
            count++;
        }
    }

    printf("The digit %d occurs %d times in the given number.\n", digit, count);

    return 0;
}