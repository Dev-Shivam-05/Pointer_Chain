// Passing An Array

#include<iostream>
using namespace std;

void ();

int main()
{
    int size,i;

    cout << "Enter The Size Of Array :- ";
    cin >> size;
    
    int array[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter the Value Of Array["<< i <<"] :- ";
        cin >> array[i];
    }

    
    
    return 0;
}