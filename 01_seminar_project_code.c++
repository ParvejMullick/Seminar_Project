#include <iostream>
using namespace std;

float funcAverage(int p, int q)
{
    float avg = (p + q) / 2.0;
    return avg;
}

int main()
{
    float average;
    average = funcAverage(8, 9);
    cout << "\n\nAverage value is : " << average << endl
         << endl;
    return 0;
}