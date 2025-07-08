#include <iostream>
#include <string>
using namespace std;

void mainMenu();
int sumNatural(int num);
int factorial(int num);
int reverse(int num);
bool isPalindrome(int num);
int countDigits(int num);
int sumOfDigits(int num);
bool isPrime(int num);
void fibonacci(int num);

int main()
{
    int choice, n, num;

    do
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a number: ";
            cin >> n;
            if (n > 0)
            {
                cout << "Sum of all natural numbers up to " << n << " is: " << sumNatural(n) << endl
                     << endl;
            }
            else
            {
                cout << "Please enter a positive number." << endl
                     << endl;
            }
            break;

        case 2:
            cout << "Enter a number: ";
            cin >> n;
            if (n >= 0)
            {
                cout << "Factorial is: " << factorial(n) << endl
                     << endl;
            }
            else
            {
                cout << "Please enter a non-negative number." << endl
                     << endl;
            }
            break;

        case 3:
            cout << "Enter a number to reverse: ";
            cin >> num;
            if (num >= 0)
            {
                cout << "Reverse of " << num << " is: " << reverse(num) << endl
                     << endl;
            }
            else
            {
                cout << "Please enter a non-negative number." << endl
                     << endl;
            }
            break;

        case 4:
            cout << "Enter a number: ";
            cin >> num;
            if (num >= 0)
            {
                if (isPalindrome(num))
                {
                    cout << "The number is a palindrome.";
                }
                else
                {
                    cout << "The number is not a palindrome.";
                }
                cout << endl
                     << endl;
            }
            else
            {
                cout << "Please enter a non-negative number." << endl
                     << endl;
            }
            break;

        case 5:
            cout << "Enter a number: ";
            cin >> num;
            if (num >= 0)
            {
                cout << "Digits Count: " << countDigits(num) << endl
                     << endl;
            }
            else
            {
                cout << "Please enter a non-negative number." << endl
                     << endl;
            }
            break;

        case 6:
            cout << "Enter a number: ";
            cin >> num;
            if (num >= 0)
            {
                cout << "Sum of Digits: " << sumOfDigits(num) << endl
                     << endl;
            }
            else
            {
                cout << "Please enter a non-negative number." << endl
                     << endl;
            }
            break;

        case 7:
            cout << "Enter a number: ";
            cin >> num;
            if (num > 0)
            {
                if (isPrime(num))
                {
                    cout << num << " is a prime number.";
                }
                else
                {
                    cout << num << " is NOT a prime number.";
                }
                cout << endl
                     << endl;
            }
            else
            {
                cout << "Please enter a positive number greater than 1." << endl
                     << endl;
            }
            break;

        case 8:
            cout << "Enter how many terms you want in the Fibonacci series: ";
            cin >> n;
            if (n > 0)
            {
                cout << "Fibonacci Series: ";
                fibonacci(n);
                cout << endl
                     << endl;
            }
            else
            {
                cout << "Please enter a positive number." << endl
                     << endl;
            }
            break;

        case 0:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid Choice" << endl
                 << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}

void mainMenu()
{
    cout << "=========== Menu: ===========" << endl
         << "1. Sum of all N Number" << endl
         << "2. Factorial of N Number" << endl
         << "3. Reverse of a Number" << endl
         << "4. Check Palindrome" << endl
         << "5. Count Digits" << endl
         << "6. Sum of Digits" << endl
         << "7. Check the number is prime or not" << endl
         << "8. Fibonacci Series" << endl
         << "0. Exit" << endl
         << "Enter your choice: ";
}

int sumNatural(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int factorial(int num)
{
    int product = 1;
    for (int i = 1; i <= num; i++)
    {
        product *= i;
    }
    return product;
}

int reverse(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    return rev;
}

bool isPalindrome(int num)
{
    return num == reverse(num);
}

int countDigits(int num)
{
    if (num == 0)
        return 1;
    int count = 0;
    while (num != 0)
    {
        count += 1;
        num = num / 10;
    }
    return count;
}

int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + (num % 10);
        num /= 10;
    }
    return sum;
}

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void fibonacci(int num)
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= num; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}
