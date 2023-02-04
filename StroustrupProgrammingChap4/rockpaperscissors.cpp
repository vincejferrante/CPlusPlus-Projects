#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;



int main()
{
    const int array_size = 3;
    //seed random number
    srand(time(0));
    //prompt the user
    

    string hand[array_size] = {"rock", "paper", "sissors"};
    //random choice
    int computer_action = rand() % array_size;
    //creating a string variable for user input
    string user_action;
    //prompting user
    cout << "Enter a choice (rock, paper, scissors): \n";
    //cout << "\n" << hand[computer_action] << "\n";
    cin >> user_action;
    

    //determine the winner
    if (user_action == hand[computer_action]) {
        cout << "Both players selected" << user_action << "It's a tie!";
    }

    else if (user_action == "paper"){
        if (hand[computer_action] == "rock") {
            cout << "Paper covers rock! You win!";
        } else {
            cout << "Scissors cuts paper! You lose.";
        }
    }

    else if (user_action == "scissors") {
        if (hand[computer_action] == "paper") {
            cout << "Scissors cuts paper! You win!";
        } else {
            cout << "Rock smashes scissors! You lose.";
        }
    }

    else if (user_action == "rock"){
        if (hand[computer_action] == "scissors") {
            cout << "Rock smashes scissors! You win!";
        } else {
            cout << "Paper covers rock! You lose";
        }
    }

    else {
        cout << "Rock smashes scissors! You lose.";
    }

    cout << " \n " << user_action << " " << hand[computer_action] << " \n ";


    return 0;
}