#include <iostream>
using namespace std;

int main()
{
    // Solution 1:
    // for (int i = 1; i <= 5; i++)
    // {
    //     if (i == 1 || i == 3)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "*" << " ";
    //         }
    //     }
    //     else if (i ==2)
    //     {
    //         cout << "*\t\t*";
    //     }
    //     else
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Solution 2:
    for (int i = 1; i <= 5; i++)
    {
        string value = (i == 1 || i == 3) ? "* * * * *" : (i == 2) ? "*\t\t*"
                                                                   : "*";
        cout << value << endl;    
    }
}