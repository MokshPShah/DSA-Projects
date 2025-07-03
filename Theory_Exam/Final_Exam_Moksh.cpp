#include <iostream>
#include <vector>
#include <string>
#define MAX 100
using namespace std;

void arrManipulation();

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(NULL) {}
};

class List
{
    Node *head;
    int size;

public:
    List() : head(NULL), size(0) {};

    void insert(int val);
    void display();
    void countNodes();
    void deleteByValue(int val);
};

void mainMenu();
void linkedListMenu(List &ls);
void vectorOperations();

class Stack
{
    int top;
    int capacity;
    int *arr;
    int size;

public:
    Stack(int n)
    {
        this->top = -1;
        this->capacity = n;
        this->arr = new int[n];
        this->size = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int val);
    void pop();
    void display();
    bool isPalindrome(string str);
};

void StackMenu();
int main()
{
    List ls;
    int choice = -1, val;
    string str;

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            arrManipulation();
            break;

        case 2:
            vectorOperations();
            break;

        case 3:
            linkedListMenu(ls);
            break;

        case 4:
            cout << "Enter the value to be deleted: ";
            cin >> val;
            ls.deleteByValue(val);
            ls.display();
            break;

        case 5:
            StackMenu();
            break;

        case 6:
        {
            cout << "Enter any string: ";
            cin >> str;
            Stack st(str.length());
            if (st.isPalindrome(str))
            {
                cout << "String is Palindrome." << endl
                     << endl;
            }
            else
            {
                cout << "String is not Palindrome." << endl
                     << endl;
            }
            break;
        }

        case 0:
            cout << "Exiting";
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }

    return 0;
}

void mainMenu()
{
    cout << "===============" << endl
         << "1. Array Manipulation" << endl
         << "2. Vector Operations" << endl
         << "3. Singly Linked List" << endl
         << "4. Deletion Operation on Linked List" << endl
         << "5. Stack Operations" << endl
         << "6. Palindrome" << endl
         << "0. Exit" << endl
         << "===============" << endl
         << "Enter your choice: ";
}

void linkedListMenu(List &ls)
{
    int subChoice = -1, val;

    while (subChoice != 0)
    {
        cout << "\n--- Singly Linked List Menu ---" << endl
             << "1. Insert Node" << endl
             << "2. Display List" << endl
             << "3. Count Nodes" << endl
             << "0. Back to Main Menu" << endl
             << "Enter your choice: ";
        cin >> subChoice;

        switch (subChoice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> val;
            ls.insert(val);
            break;
        case 2:
            ls.display();
            break;
        case 3:
            ls.countNodes();
            break;
        case 0:
            cout << "Returning to main menu..." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }
}

void vectorOperations()
{
    vector<int> v, result;
    int val;
    cout << "Enter number(-1 to stop): ";
    while (cin >> val && val != -1)
    {
        v.push_back(val);
    }

    for (int i = 0; i < v.size(); i++)
    {
        bool found = false;

        for (int j = 0; j < result.size(); j++)
        {
            if (v[i] == result[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
            result.push_back(v[i]);
    }

    cout << "Vector without duplicates: ";
    for (int data : result)
    {
        cout << data << " ";
    }
    cout << endl;
}

void arrManipulation()
{
    int size;
    float sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array[" << i << "]: ";
        cin >> arr[i];
        sum = sum + arr[i];
    }

    // Latgest Element
    int max = arr[0];
    cout << endl
         << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        cout << arr[i] << " ";
    }

    cout << endl
         << "Sum is: " << sum << endl
         << "Average is: " << sum / size << endl
         << "Largest Value is: " << max << endl;

    // Reverse Element
    cout << "Reverse array: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}

void List::insert(int val)
{
    Node *newNode = new Node(val);
    if (this->head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *ptr = this->head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    size++;
}

void List::display()
{
    Node *curr = this->head;
    while (curr != NULL)
    {
        cout << " | " << curr->data << " | ";
        curr = curr->next;
    }
    cout << endl;
}

void List::countNodes()
{
    cout << "There are " << this->size << " nodes in a list" << endl;
}

void List::deleteByValue(int val)
{
    Node *ptr = this->head;
    Node *prev = NULL;

    if (ptr == NULL)
    {
        cout << "The list is empty" << endl
             << endl;
        return;
    }

    if (ptr->data == val)
    {
        this->head = ptr->next;
        delete ptr;
        size--;
        cout << "Deleted node with value " << val << endl;
        return;
    }

    while (ptr && ptr->data != val)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    if (!ptr)
    {
        cout << "Data not found in the list." << endl
             << endl;
        return;
    }

    prev->next = ptr->next;
    delete ptr;
    size--;
    cout << "Deleted node with value " << val << endl;
}

void Stack::push(int val)
{
    if (top >= this->capacity - 1)
    {
        cout << "Stack Overflow" << endl
             << endl;
    }
    else
    {
        arr[++top] = val;
    }
}

void Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl
             << endl;
    }
    else
    {
        cout << arr[top--] << " poped from stack" << endl
             << endl;
    }
}

void Stack::display()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl
             << endl;
    }
    else
    {
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
        cout << endl
             << endl;
    }
}

bool Stack::isPalindrome(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        push(str[i]);
    }

    for (int i = 0, j = top; i < str.length() && j >= 0; i++, j--)
    {
        if (arr[j] != str[i])
        {
            return false;
        }
    }
    return true;
}

void StackMenu()
{
    int subChoice, val, size;
    cout << "Enter the size of the array: ";
    cin >> size;
    Stack s(size);

    while (subChoice != 0)
    {
        cout << "\n--- Stack Menu ---" << endl
             << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Display" << endl
             << "0. Back to main menu" << endl
             << "Enter your choice: ";
        cin >> subChoice;

        switch (subChoice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            s.push(val);
            cout << val << " pushed to stack" << endl
                 << endl;
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 0:
            cout << "Returning to main menu..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
            break;
        }
    }
}