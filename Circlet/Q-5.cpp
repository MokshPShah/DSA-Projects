#include<iostream>
using namespace std;

int main(){
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i; j <= 5; j++)
        {
            cout << j;
        }
        if (i != 5)
        {
            for (int m = 4; m >=i; m--)
            {
                cout << m;
            }
        }
        cout << endl;   
    }
    
}