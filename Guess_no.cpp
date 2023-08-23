#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
  cout << "\n\t\t\tWelcome to GuessTheNumber game!" << endl;
  cout << "You have to guess a number between 1 and 100. "
          "You'll have limited choices based on the "
          "level you choose. Good Luck!"
       << endl;

  while (true)
  {
    cout << "\nEnter the difficulty level: \n";
    cout << "1 for easy!\t";
    cout << "2 for medium!\t";
    cout << "3 for difficult!\t";
    cout << "0 for ending the game!\n"
         << endl;

    // select the level of difficulty
    int difficultyLevel;
    cout << "Enter the number: ";
    cin >> difficultyLevel;

    // generating the secret number
    srand(time(0));
    int secretNumber = 1 + (rand() % 100);
    int playerChoice;

    // Difficulty Level:Easy
    if (difficultyLevel == 1)
    {
      cout << "\nYou have 10 choices for finding the "
              "secret number between 1 and 100.";
      int choicesLeft = 10;
      for (int i = 1; i <= 10; i++)
      {
        cout << "\n\nEnter the  gussed number: ";
        cin >> playerChoice;

        if (playerChoice == secretNumber)
        {
          cout << "Well played! You won," << playerChoice << " is the secret number" << endl;
          cout << "\t\t\t Thanks for playing...." << endl;
          cout << "Play the game again with us!!\n\n"
               << endl;
          break;
        }
        else
        {
          cout << "Nope, " << playerChoice << " is not the right number\n";
          if (playerChoice > secretNumber)
          {
            cout << "The secret number is smaller than the number you have chosen" << endl;
          }
          else
          {
            cout << "The secret number is greater than the number you have chosen" << endl;
          }
          choicesLeft--;
          cout << choicesLeft << " choices left. " << endl;

          if (choicesLeft == 0)
          {
            cout << "You couldn't find the secret number, it was " << secretNumber << ", You lose!!\n\n";
            cout << "Play the game again to win!!!\n\n";
          }
        }
      }
    }

    // Difficulty level : Medium
    else if (difficultyLevel == 2)
    {
      cout << "\nYou have 7 choices for finding the "
              "secret number between 1 and 100.";
      int choicesLeft = 7;
      for (int i = 1; i <= 7; i++)
      {
        cout << "\n\nEnter the  gussed number: ";
        cin >> playerChoice;

        if (playerChoice == secretNumber)
        {
          cout << "Well played! You won," << playerChoice << " is the secret number" << endl;
          cout << "\t\t\t Thanks for playing...." << endl;
          cout << "Play the game again with us!!\n\n"
               << endl;
          break;
        }
        else
        {
          cout << "Nope, " << playerChoice << " is not the right number\n";
          if (playerChoice > secretNumber)
          {
            cout << "The secret number is smaller than the number you have chosen" << endl;
          }
          else
          {
            cout << "The secret number is greater than the number you have chosen" << endl;
          }
          choicesLeft--;
          cout << choicesLeft << " choices left. " << endl;

          if (choicesLeft == 0)
          {
            cout << "You couldn't find the secret number, it was " << secretNumber << ", You lose!!\n\n";
            cout << "Play the game again to win!!!\n\n";
          }
        }
      }
    }

    // Difficulty level : Hard
    else if (difficultyLevel == 3)
    {
      cout << "\nYou have 5 choices for finding the "
              "secret number between 1 and 100.";
      int choicesLeft = 5;
      for (int i = 1; i <= 5; i++)
      {
        cout << "\n\nEnter the  gussed number: ";
        cin >> playerChoice;

        if (playerChoice == secretNumber)
        {
          cout << "Well played! You won," << playerChoice << " is the secret number" << endl;
          cout << "\t\t\t Thanks for playing...." << endl;
          cout << "Play the game again with us!!\n\n"
               << endl;
          break;
        }
        else
        {
          cout << "Nope, " << playerChoice << " is not the right number\n";
          if (playerChoice > secretNumber)
          {
            cout << "The secret number is smaller than the number you have chosen" << endl;
          }
          else
          {
            cout << "The secret number is greater than the number you have chosen" << endl;
          }
          choicesLeft--;
          cout << choicesLeft << " choices left. " << endl;

          if (choicesLeft == 0)
          {
            cout << "You couldn't find the secret number, it was " << secretNumber << ", You lose!!\n\n";
            cout << "Play the game again to win!!!\n\n";
          }
        }
      }
    }

    // Difficulty level : exit the game
    else if (difficultyLevel == 0)
    {
      exit(0);
    }

    // Difficulty level : Invalid
    else
    {
      cout << "Wrong choice , please enter the correct choice to play the game" << endl;
    }
  }
  return 0;
}