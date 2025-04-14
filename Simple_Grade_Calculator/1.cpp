#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 0)
    {
        grade = (score >= 81 && score <= 100)  ? 'A'
            : (score <= 80 && score >= 71) ? 'B'
            : (score <= 70 && score >= 61) ? 'C'
            : (score <= 60 && score >= 51) ? 'D'
            : (score <= 50 && score >= 41) ? 'E'
            : (score <= 40 && score >= 0)  ? 'F' : ' '; 
        cout << "Your grade is " << grade << endl;
    }
    else
    {
        cout << "Enter your correct score..." << endl;
    }
}