#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int cpu = 0;
    int usr = 0;
    
    while (true) {
        // prints title
        printf("-------------------\n");
        printf("Rock Paper Scissors\n");
        printf("cpu %d | usr %d\n", cpu, usr);
        
        // user plays
        char userin[10];
        int userchoice = 0;
        printf("User choses ");
        scanf("%s", userin);

        if (!strcmp(userin, "rock") || !strcmp(userin, "ROCK") || !strcmp(userin, "Rock")){
            userchoice = 0;
        }
        else if (!strcmp(userin, "paper") || !strcmp(userin, "PAPER") || !strcmp(userin, "Paper")){
            userchoice = 1;
        }
        else if (!strcmp(userin, "scissor") || !strcmp(userin, "SCISSOR") || !strcmp(userin, "Scissor")){
            userchoice = 2;
        }
        else {
            printf("ERROR INVALID INPUT\n");
            continue;
        }
        
        // cpu plays
        int cpuchoice = rand() % 3;
        printf("Computer choses ");
        if (cpuchoice == 0){
            printf("rock\n");
        }
        else if (cpuchoice == 1){
            printf("paper\n");
        }
        else if (cpuchoice == 2){
            printf("scissor\n");
        }
        
        // Scoring
        if (userchoice == cpuchoice){
            printf("DRAW\n");
        }
        else if (
            (userchoice == 0 && cpuchoice == 1) || // rock vs paper
            (userchoice == 1 && cpuchoice == 2) || // paper vs scissor
            (userchoice == 2 && cpuchoice == 0)    // scissor vs rock
            ){
                printf("CPU wins!\n");
                cpu += 1;
        }
        else if (
            (userchoice == 0 && cpuchoice == 2) || // rock vs scissor
            (userchoice == 1 && cpuchoice == 0) || // paper vs rock
            (userchoice == 2 && cpuchoice == 1)    // scissor vs paper
            ){
                printf("USER wins!\n");
                usr += 1;
        }
    }
}
