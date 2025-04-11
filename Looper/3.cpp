#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Enter positive two digit number.";
    }
    else if (num < 10)
    {
        cout << "Enter two digit number.";
    }
    else
    {
        int firstDigit = num, lastDigit = num % 10;

        while (firstDigit >= 10)
        {
            firstDigit /= 10;
        }
        int sum = firstDigit + lastDigit;
        cout << "The sum of first and last digit is: " << sum;
    }
}