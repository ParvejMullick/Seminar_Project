#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
    int Automated_Number;
    float UserNum;
    auto count = 1;
    string name;
    int enter;

    srand(time(NULL));
    Automated_Number = rand() % 10;
    cout << "\n\n                           ************ WELCOME to Integer Guessing Game!!! *************                    \n"
         << endl;
    enter = cin.get();
    if (enter == 10)
    {
        cout << "------ Rules : Computer will randomly generate any integer number between (0-10) . You need to guess it in least number of attempts -------\n";
    }
    else
    {

        cout << "------ Rules : Computer will randomly generate any integer number between (0-10) . You need to guess it in least number of attempts -------\n";
    }
    cout << "\nEnter your name : ";
    cin >> name;
    cout << "\n";

    while (1)
    {
        cout << "\nEnter your guess : ";
        cin >> UserNum;

        if (Automated_Number == UserNum)
        {
            cout << "*****************************************************************\n\n";
            cout << "CONGRATS !!! You are right , the automated number was " << Automated_Number << ".\n";
            cout << name << ", you guessed it in " << count << " attempts.\n\n";
            cout << "*****************************************************************\n\n\n";
            exit(0);
        }
        else if (Automated_Number > UserNum)
        {
            cout << "Automated number is greater than " << UserNum << ", try again !\n\n";
        }
        else
        {
            cout << "Automated number is smaller than " << UserNum << ", try again !\n\n";
        }
        count++;
    }
    return 0;
}