#include<iostream>
using namespace std;

int main()
{
    int num_1;

    cout << "Enter A Number :- ";
    cin >> num_1;

    int *pointer_p,**pointer_q,***pointer_r;

    pointer_p = &num_1;
    pointer_q = &pointer_p;
    pointer_r = &pointer_q;

    cout << "The Inputed Number Is :- "<< ***pointer_r <<"." << endl;
    cout << "The Address Of First Pointer Is :- "<< **pointer_r <<"." << endl;
    cout << "The Address Of Second Pointer Is :- "<< *pointer_r <<"." << endl;
    cout << "The Address Of Third Pointer Is :- "<< pointer_r <<"." << endl;
    return 0;
}