#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;
    int temp = num, count = 0;

    if (temp == 0)
    {
        count = count + 1;
    }
    else
    {
        while (temp != 0)
        {
            count++;
            temp /= 10;
        }
        cout << "You have entered " << count << " digit number.";
    }
}