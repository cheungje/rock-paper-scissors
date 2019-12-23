#include <iostream>
#include <string>
#include "stdlib.h"
using namespace std;

int main() {
    cout << endl;
    cout << "Welcome to Rock-Paper-Scissors!" << endl;

    string playerName;
    cout << "Player, please enter your name: ";
    cin >> playerName;

    //Creation of number of rounds
    int rounds = 0;
    cout << "How many rounds do you want to play? Enter number: ";
    cin >> rounds;

    //Creation of scoreboard
    int playerScore = 0;
    int computerScore = 0;

    int roundNumber = 0;
    while (roundNumber < rounds)
    {
        ++roundNumber;

        cout << "Rock..." << endl;
        cout << "Paper..." << endl;
        cout << "Scissors... says shoo!" << endl;
        cout << "Enter STOP to exit the game." << endl;

        //The player moves
        cout << "Enter rock, paper, or scissors: ";
        string input;
        cin >> input;
        if (input == "STOP") break;
        cout << "You played: " << input << endl;

        //The computer moves
        string outcomes[3] = {"rock", "paper", "scissors"};
        int number = rand() % 2 + 1;
        string computerResponse = outcomes[number];
        cout << "The computer played: " << computerResponse << endl;

        //comparison for if you played rock
        if (input == "rock")
        {
            if (computerResponse == input)
            {
                cout << "Tied! Both you and the computer played " << input << endl;
            }
            else if (computerResponse == "paper")
            {
                cout << "The computer wins this round!" << endl;
                ++computerScore;
            }
            else if (computerResponse == "scissors")
            {
                cout << "You win this round!" << endl;
                ++playerScore;
            }
        }

        //comparison for if you played paper
        if (input == "paper")
        {
            if (computerResponse == input)
            {
                cout << "Tied! Both you and the computer played " << input << endl;
            }
            else if (computerResponse == "rock")
            {
                cout << "You win this round!" << endl;
                ++playerScore;
            }
            else if (computerResponse == "scissors")
            {
                cout << "The computer wins this round!" << endl;
                ++computerScore;
            }
        }

        //comparison if you played scissor
        if (input == "scissors")
        {
            if (computerResponse == input)
            {
                cout << "Tied! Both you and the computer played " << input << endl;
            }
            else if (computerResponse == "rock")
            {
                cout << "The computer win this round!" << endl;
                ++computerScore;
            }
            else if (computerResponse == "paper")
            {
                cout << "You win this round!" << endl;
                ++playerScore;
            }
        }

        //Print out the scores
        cout << "Your score is: " << playerScore << endl;
        cout << "The computer's score is: " << computerScore << endl;
        cout << "End of round " << roundNumber << endl << endl;

    }

    if (computerScore > playerScore) {
        cout << "The computer wins!" << endl;
    } else if (computerScore == playerScore) {
        cout << "You and the computer tied!" << endl;
    } else if (computerScore < playerScore) {
        cout << "The player " << playerName << " wins!" << endl;
    }
}