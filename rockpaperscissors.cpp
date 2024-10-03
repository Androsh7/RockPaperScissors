#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int cpu = 0;
    int usr = 0;
    
    while (true) {
        // prints title
        cout << "-------------------\n"
             << "Rock Paper Scissors\n"
             << "cpu " << cpu << " | usr " << usr << "\n";
        
        // user plays
        string userin = "";
        int userchoice = 0;
        cout << "User choses ";
        cin >> userin;

        if (userin == "rock" || userin == "ROCK" || userin == "Rock"){
            userchoice = 0;
        }
        else if (userin == "paper" || userin == "PAPER" || userin == "Paper"){
            userchoice = 1;
        }
        else if (userin == "scissor" || userin == "SCISSOR" || userin == "Scissor"){
            userchoice = 2;
        }
        else {
            cout << "ERROR INVALID INPUT\n";
            continue;
        }
        
        // cpu plays
        int cpuchoice = rand() % 3;
        cout << "Computer choses ";
        if (cpuchoice == 0){
            cout << "rock\n";
        }
        else if (cpuchoice == 1){
            cout << "paper\n";
        }
        else if (cpuchoice == 2){
            cout << "scissor\n";
        }
        
        // Scoring
        if (userchoice == cpuchoice){
            cout << "DRAW\n";
        }
        else if (
            (userchoice == 0 && cpuchoice == 1) || // rock vs paper
            (userchoice == 1 && cpuchoice == 2) || // paper vs scissor
            (userchoice == 2 && cpuchoice == 0)    // scissor vs rock
            ){
                cout << "CPU wins!\n";
                cpu += 1;
            }
        else if (
            (userchoice == 0 && cpuchoice == 2) || // rock vs scissor
            (userchoice == 1 && cpuchoice == 0) || // paper vs rock
            (userchoice == 2 && cpuchoice == 1)    // scissor vs paper
            ){
                cout << "USER wins!\n";
                usr += 1;
            }
    }
}
