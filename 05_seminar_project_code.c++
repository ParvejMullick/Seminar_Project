#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
    float Automated_Number;
    float UserNum;
    int num1;
    float num2;
    auto count = 1;
    string name;
    int enter;

    srand(time(NULL));
    num1 = rand() % 100 + 1;
    num2 = ((float)rand()) / ((float)RAND_MAX);
    num2 = floor(100 * num2) / 100;
    float NUM = (num2) / num1;
    NUM = (floor(100 * NUM) / 100) + 0.01;

    Automated_Number = rand() % 10 + NUM;
    cout << "\n\n                           ************ WELCOME to Float Guessing Game!!! *************                    \n"
         << endl;

    enter = cin.get();
    if (enter == 10)
    {
        cout << "---------- Rules : Computer will randomly generate a floating point number between (0-10) ,precise upto 2 decimal places. You need to guess it in least number of attempts ---------\n";
    }
    else
    {

        cout << "------ Rules : Computer will randomly generate a floating point number between (0-10) ,precise upto 2 decimal places. You need to guess it in least number of attempts -------\n";
    }     

    cout<<"\nEnter your name : ";
    cin>>name;
    cout<<"\n";

    while (1)
    {
        cout << "\nEnter your guess : ";
        cin >> UserNum;

        if (Automated_Number == UserNum)
        {
            cout << "*****************************************************************\n\n";
            cout << "CONGRATS !!! You are right , the automated number was " << Automated_Number << " .\n";
            cout <<name<<", you guessed it in " << count << " attempts.\n\n";
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