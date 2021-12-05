#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

template <class T>
class vector
{
public:
    T Automated_Number;
    T UserNum;
    int num1;
    float num2;
    string name;
    int count = 1;

    float AutoNum()
    {
        srand(time(NULL));
        num1 = rand() % 100 + 1;
        num2 = ((float)rand()) / ((float)RAND_MAX);
        num2 = floor(100 * num2) / 100;
        float NUM = (num2) / num1;
        NUM = (floor(100 * NUM) / 100) + 0.02;
        Automated_Number = rand() % 10 + NUM;
        return Automated_Number;
    }

    void Guess_The_Number()
    {
        cout << "\nEnter your name : ";
        cin >> name;
        cout << "\n";
        AutoNum();

        while (1)
        {
            cout << "\nEnter your guess : ";
            cin >> UserNum;
            if (Automated_Number == UserNum)
            {
                cout << "*****************************************************************\n\n";
                cout << "CONGRATS !!! You are right , the automated number was " << Automated_Number << " .\n";
                cout << name << ", you guessed it in " << count << " attempts.\n\n";
                cout << "*****************************************************************\n\n\n";
                return;
            }
            else
            {
                Automated_Number > UserNum ? cout << "Automated number is greater than " << UserNum << ", try again !\n\n" : cout << "Automated number is smaller than " << UserNum << ", try again !\n\n";
            }
            count++;
        }
    }
};

int main()
{
    vector<int> v1;
    vector<float> v2;
    int enter;
    int Guessing_Game;

    cout << "\n\n                          ************ WELCOME To Number Guessing Game!!! *************                    \n"
         << endl;
    enter = cin.get();
    enter == 10 ? cout << "\n----- Rules : Computer will randomly generate a number between (0-10) ,precise upto 2 decimal places for floating point numbers only. You need to guess it in least number of attempts -----\n\n" : cout << "\n----- Rules : Computer will randomly generate a number between (0-10) ,precise upto 2 decimal places for floating point numbers only. You need to guess it in least number of attempts -----\n\n";

    cout << "Press enter key to play 'Integer Guessing Game', enter any other key to play 'Float Guessing Game' : ";
    Guessing_Game = cin.get();
    cout << endl;
    Guessing_Game == 10 ? cout << "************ Integer Guessing Game ************\n\n" : cout << "************ Float Guessing Game ************\n\n";
    Guessing_Game == 10 ? v1.Guess_The_Number() : v2.Guess_The_Number();
    return 0;
}
