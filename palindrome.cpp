#include <iostream>
using namespace std;

int main()
{
    int number, reverse = 0, rem, holder;
    cin >> number;
    holder = number;

    while (number > 0)
    {
        rem = number % 10;
        reverse = rem + reverse * 10;
        number = number / 10;
    }
    if (reverse == holder)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}
