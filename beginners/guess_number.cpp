/* In this program, the user tries to guess a number between 1 in 100 in a single attempt.
The rand() function is used to generate a random number. The expression (rand() % 100 +1) 
guarantees that the number will be between 1 and 100. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int magic; /* number to guess*/
    int guess; /*user's guess*/
    
    magic = rand() % 100 + 1; /* generates a random number between 1 and 100 */
    printf("Guess a number between 1 and 100: ");
    scanf("%d", &guess);
    if(guess == magic) 
        printf("\n** Got it right! **");
    else 
        printf("Wrong! The number is: %d\n", magic);

}
