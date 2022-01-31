#include <iostream>
#include <stdlib.h> 

using namespace std; 

int main()
{
    //declaring the variables
    int choice;
    int computer;

    //prompts the user for their input
    cout<<"Choose Rock (0), Paper (1), or Scissors (2): ";
    //stores the user input in the variable
    cin>>choice; 
    //generates a random number from 0 to 2
    srand(time(NULL));
    computer = rand() % 3; 

    //if else statement that prints out the computers choice
    if (computer == 0)
        {
            cout<<"Computer chooses: Rock"<<endl;
        }
    else if (computer == 1)
        {
            cout<<"Computer chooses: Paper"<<endl;
        }
    else if (computer == 2)
        {
            cout<<"Computer chooses: Scissors"<<endl;
        }

    //if else statement that compares the user's' and the computer's input and prints out the result of the game
    if (choice == computer)
        {
            cout<<"You tie!"<<endl;
        }
    else if (choice == 0 && computer == 1)
        {
            cout<<"You lose!"<<endl;
        }
    else if (choice == 1 && computer == 0)
        {
            cout<<"You win!"<<endl;
        }
    else if (choice == 1 && computer == 2)
        {
            cout<<"You lose!"<<endl;
        }
    else if (choice == 2 && computer == 1)
        {
            cout<<"You win!"<<endl;
        }
    else if (choice == 2 && computer == 0)
        {
            cout<<"You lose!"<<endl;
        }
    else if (choice == 0 && computer == 2)
        {
            cout<<"You win!"<<endl;
        }

    return 0;
}
