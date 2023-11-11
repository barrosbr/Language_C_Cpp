/* 
Usage:
In this program, the user tries to guess a number between 1 in 100.
The user can make an unlimited number of tries until guess the generated number.
The user can enter 999 to exit the program at any time.

Code explanation:
The rand() function is used to generate a random number. 
The expression (rand() % 100 +1) guarantees that the number 
will be between 1 and 100. 
The expression srand(time(0)) ensures that the number generated
is different each time the program is run.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void gotRight(){
    printf("You got it right");
    for (int i = 0; i < 3; i++){
        printf("!");
        fflush(stdout);
        sleep(1);
        
    }
    printf("\n");
}

int main() {

    int magic; // number to guess
    int guess; // user's guess
    int nTry = 0; // number of tries
    int system(const char *command); // for run commands in terminal
    
    system("clear"); // run 'clear' command in terminal
    printf("*******************************************************\n");
    printf("************  GUESS THE NUMBER IF YOU CAN! ************\n");
    printf("*******************************************************\n\n");

    
    srand(time(0)); // ensures that the number generated is different each time the program is run 
    magic = rand() % 100 + 1; // generates a random number between 1 and 100     
    printf("%d\n", magic);

    while (true){

        nTry++;
        printf("Guess a number between 1 and 100 (999 to exit): ");
        scanf("%d", &guess);

        if (guess == 999){
            printf("The number is: %d, you gave up after %d tries, bye!\n", magic, nTry);
            break;
        }

        if(guess == magic){ 
            gotRight();
            printf("*** You got it right! Number of attempts: %d ***\n", nTry);
            break;
        }
        else if (guess < (magic - 10) )
            printf("This number is smaller, you are far.\n");
        else if ((guess >= magic - 10)  && (guess < magic))
            printf("This number is smaller, you are close.\n");
        else if (guess > (magic + 10))
            printf("This number is bigger, you far\n.");
        else if ((guess <= magic + 10) && (guess > magic))
            printf("This number is bigger, you are close.\n");

    }
}
