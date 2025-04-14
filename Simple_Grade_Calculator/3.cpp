#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;
    cout << "Enter your score: ";
    cin >> score;

    grade = (score >= 81 && score <= 100)  ? 'A'
            : (score <= 80 && score >= 71) ? 'B'
            : (score <= 70 && score >= 61) ? 'C'
            : (score <= 60 && score >= 51) ? 'D'
            : (score <= 50 && score >= 41) ? 'E'
            : (score <= 40 && score >= 0)  ? 'F'
                                           : ' ';
    switch (grade)
    {
    case 'A':
        cout << "Your grade is A. Excellent Work!" << endl;
        break;
    case 'B':
        cout << "Your grade is B. Well Donw!" << endl;
        break;
    case 'C':
        cout << "Your grade is C. Good Job!" << endl;
        break;
    case 'D':
        cout << "Your grade is D. You Passed, but can do better!" << endl;
        break;
    case 'E':
        cout << "Your grade is E. You Passed, but you need improvment!" << endl;
        break;
    case 'F':
        cout << "Your grade is F. Sorry you fail!" << endl;
        break;
    default:
        cout << "Invalid Marks Entered" << endl;
        break;
    }
    if (grade == 'F')
    {
        cout << "Please try again next time!";
    }
    else
    {
        cout << "You're eligible for the next level!";
    }
    
    
}