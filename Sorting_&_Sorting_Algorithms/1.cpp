#include <iostream>
#include <vector>
using namespace std;

class MergeSort
{
private:
    vector<int> arr;

public:
    void merge(vector<int> &, int, int, int);
    void mergeSort(vector<int> &, int, int);
};

class SelectionSort
{
    vector<int> arr;

public:
    void selectionSort(vector<int> &);
};

class LinearSearch
{
    vector<int> arr;

public:
    int linearSearch(vector<int> &, int);
};

class BinarySearch
{
    vector<int> arr;

public:
    int binarySearch(vector<int> &, int);
};

void mainMenu();

int main()
{
    int choice, size;
    vector<int> arr;

    MergeSort ms;
    SelectionSort ss;
    LinearSearch ls;

    cout << "Enter the size of the array: ";
    cin >> size;
    arr.resize(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;

        int key, founded_idx;

        switch (choice)
        {
        case 1:
            ms.mergeSort(arr, 0, arr.size() - 1);
            cout << "Merge Sort Done" << endl
                 << endl;
            break;

        case 2:
            ss.selectionSort(arr);
            cout << "Selection Sort Done" << endl
                 << endl;
            break;

        case 3:
        {
            cout << "Enter the search key: ";
            cin >> key;

            int founded_idx = ls.linearSearch(arr, key);

            if (founded_idx == -1)
            {
                cout << "Element not founded...\n";
            }
            else
            {
                cout << "Element founded at " << founded_idx << " position.\n";
            }
            cout << endl;

            break;
        }

        case 4:
        {
            int key;
            cout << "Enter the search key: ";
            cin >> key;

            founded_idx = ls.linearSearch(arr, key);

            if (founded_idx == -1)
            {
                cout << "Element not founded...\n";
            }
            else
            {
                cout << "Element founded at " << founded_idx << " position.\n";
            }
            cout << endl;

            break;
        }

        case 5:
            cout << "Displaying the array:" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl
                 << endl;
            break;

        case 0:
            cout << "Exititng..." << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}

void mainMenu()
{
    cout << "1. Merge Sort\n"
         << "2. Selection Sort\n"
         << "3. Linear Search\n"
         << "4. Binary Search\n"
         << "5. Display\n"
         << "0. Exit\n"
         << "Enter your choice: ";
}

void MergeSort::merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int i = low, j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + low] = temp[idx];
    }
}

void MergeSort::mergeSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

void SelectionSort::selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int LinearSearch::linearSearch(vector<int> &arr, int key)
{
    SelectionSort ss;
    ss.selectionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int BinarySearch::binarySearch(vector<int> &arr, int key)
{
    SelectionSort ss;
    ss.selectionSort(arr);

    int low = 0;
    int high = arr.size() - 1;

    if (low > high)
    {
        return -1;
    }

    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}