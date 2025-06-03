#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int capacity;
    int size;

    Stack(int n)
    {
        this->arr = new int[n];
        this->capacity = n;
        this->top = -1;
        this->size = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push()
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack Overflow..." << endl
                 << endl;
        }
        else
        {
            int elem;
            cout << "Enter the element: ";
            cin >> elem;

            this->top++;
            this->arr[top] = elem;
            this->size++;
            cout << "Push Operation Successfull..." << endl
                 << endl;
        }
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow..." << endl
                 << endl;
        }
        else
        {
            this->top--;
            this->size--;
            cout << "Pop Operation Successfull..." << endl
                 << endl;
        }
    }

    void peek()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty..." << endl
                 << endl;
        }
        else
        {
            cout << "Top of the array is: " << this->arr[top] << endl
                 << endl;
        }
    }

    void display()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty..." << endl
                 << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << this->arr[i] << endl;
            }

            cout << endl;
        }
    }
    void isEmpty()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty..." << endl
                 << endl;
        }
        else
        {
            cout << "Stack is not empty..." << endl
                 << endl;
        }
    }
    void isFull()
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack is full" << endl
                 << endl;
        }
        else
        {
            cout << "Stack is not full" << endl
                 << endl;
        }
    }
};

void mainMenu()
{
    cout << "Press 1 for push element in stack" << endl
         << "Press 2 for pop element for stack" << endl
         << "Press 3 for viewing top element form the stack" << endl
         << "Press 4 for viewing all element of the stack" << endl
         << "Press 5 to check that stack is empty or not" << endl
         << "Press 6 to check that stack is full or not" << endl
         << "Enter your choice: ";
}

int main()
{
    int n, choice;
    cout << "Enter the array size: ";
    cin >> n;
    Stack stack(n);

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            stack.push();
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            stack.display();
            break;
        case 5:
            stack.isEmpty();
            break;
        case 6:
            stack.isFull();
            break;
        case 0:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice";
            break;
        }
    }

    return 0;
}