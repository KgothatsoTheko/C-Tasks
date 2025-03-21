//Task 9:  Rock-Paper-Scissors Game 

// Implement a simple rock-paper
// scissors game. Prompt the user to choose either
//  rock, paper, or scissors, and generate a random
//  choice for the computer. Determine the winner
//  based on the game rules and display the result.

#include <iostream>
#include <cstdlib>

using namespace std;

//function to generate random number
int randomNumber(){
    int random = rand() % 3;
    return random;
}

//function to check who wins the round
int winnerCheck(int player, int computer){
    if (player == computer) return 0; // Tie

    if ((player == 0 && computer == 2) || // Rock beats Scissors
        (player == 1 && computer == 0) || // Paper beats Rock
        (player == 2 && computer == 1))   // Scissors beats Paper
    {
        return 1; // Player wins
    }
    return -1; // Computer wins
}

int main(){

    srand(time(0)); // random number generator

    int firstTurn = randomNumber(), myScore=0, comScore=0, input;
    string done = "Wait, Done";
    
    cout << "Let's Play Rock-Paper-Scissor!" << '\n';
    cout << "First to 3 wins" << '\n';
    cout << "==============================="<< '\n';
    do
    {
        cout << "Enter Your choice: Rock(0), Paper(1), Scissor(2)...";
        cin >> input;

        //error handeling if the wrong 
        if (input < 1 || input > 3) {
            cout << "Invalid choice! Please enter 0, 1, or 1." << '\n';
            continue;
        }

        int computerChoice = randomNumber();
        switch (input)
    {
        case 0:
        cout << "You Choose Rock" << '\n';
        break;
        case 1:
        cout << "You Choose Paper" << '\n';
        break;
        case 2:
        cout << "You Choose Scissor" << '\n';
        break;
    }
    switch (computerChoice)
    {
        case 0:
        cout << "Computer choose Rock" << '\n';
        break;
        case 1:
        cout << "Computer choose Paper" << '\n';
        break;
        case 2:
        cout << "Computer choose Scissor" << '\n';
        break;
    }

    // Determine round winner
        int result = winnerCheck(input, computerChoice);
        if (result == 1) {
            myScore++;
            cout << "You win this round!" << '\n';
        } else if (result == -1) {
            comScore++;
            cout << "Computer wins this round!" << '\n';
        } else {
            cout << "Tie!" << '\n';
        }

        // Display scores
        cout << "Score: You [" << myScore << "] - Computer [" << comScore << "]" << '\n';

    } while (myScore < 3 && comScore < 3);
    
    // Announce final winner
    if (myScore == 3) {
        cout << "Congratulations! You won the game!" << '\n';
    } else {
        cout << "Computer wins the game! Better luck next time! " << '\n';
    }
    cin >> done;

    return 0;
}