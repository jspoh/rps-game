// rock paper scissors game
// my first program in C lol pls be nice

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sayHi();
const char* getName();
int getAge();
int getRandNum();
int getPlayerChoice();

int main()
{
    const char DRAW[] = "It's a draw!\n";
    const char WIN[] = "You win!\n";
    const char LOSE[] = "You lost!\n";
    const char CROCK[] = "Computer chose [ROCK]";
    const char CPAPER[] = "Computer chose [PAPER]";
    const char CSCISSORS[] = "Computer chose [SCISSORS]";
    const char PROCK[] = "You chose [ROCK]";
    const char PPAPER[] = "You chose [PAPER]";
    const char PSCISSORS[] = "You chose [SCISSORS]";

    int playerScore = 0;
    int comScore = 0;

    getName();  // still trying to figure out how to return !user-input! string variables to be stored as a global variable

    int running = 1;

    while (running == 1)
    {
        int comChoice = getRandNum();
        int pChoice = getPlayerChoice();

        if (pChoice == 1)
        {
            (comChoice == 1) ? printf("\n%s\n%s\n%s", PROCK, CROCK, DRAW) :  // (condition) ? [do this if true] : [else/elif do this];
            (comChoice == 2) ? printf("\n%s\n%s\n%s", PROCK, CPAPER, LOSE) :  // shorthand if condition
            printf("\n%s\n%s\n%s", PROCK, CSCISSORS, WIN);                    // limitation of using this is that i cannot score++?
        }
        else if (pChoice == 2)
        {
            (comChoice == 1) ? printf("\n%s\n%s\n%s", PPAPER, CROCK, WIN):
            (comChoice == 2) ? printf("\n%s\n%s\n%s", PPAPER, CPAPER, DRAW):
            printf("\n%s\n%s\n%s", PPAPER, CSCISSORS, LOSE);
        }
        else if (pChoice == 3)
        {
            (comChoice == 1) ? printf("\n%s\n%s\n%s", PSCISSORS, CROCK, LOSE):
            (comChoice == 2) ? printf("\n%s\n%s\n%s", PSCISSORS, CPAPER, WIN):
            printf("\n%s\n%s\n%s", PSCISSORS, CSCISSORS, DRAW);
        }
        else
        {
            printf("Thanks for playing, goodbye!");
            running = 0;
        }
    }
	return 0;
}


int sayHi(char uname[])  // this is a function in C
{
	printf("\nHello %sLet's play rock paper scissors!\n", uname);  // \n not needed as \n already keyed in during input(fgets)?
}


const char* getName()
{
    char *name[30];
    printf("What is your name?\n");
    fgets(name, 30, stdin);
    sayHi(name);
}

/*
int getAge()
{
    printf("How old are you?\n");
    int age;
    scanf("%i", &age);
    printf("You are %i years old", age);
}
*/

int getRandNum()
{
    int randNum;
    srand(time(0));
    randNum = 1+rand()%3;  //generate random number from 1-3
    return randNum;
}


int getPlayerChoice()
{
    int playerChoice;
    printf("\n1. Rock \n2. Paper \n3. Scissors \n4. Quit \n\nYour choice: ");
    scanf("%d", &playerChoice);

    switch (playerChoice)
    {
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 0;
    default:
        printf("Please input [1] for Rock, [2] for Paper and [3] for Scissors!\n");
    }
}
