#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 p, T2 q)
{
    float avg = (p + q) / 2.0;
    return avg;
}

int main()
{
    float average;
    average = funcAverage(8, 9);
    cout << "\n\n Average is : " << average <<endl<<endl;
    return 0;
}
