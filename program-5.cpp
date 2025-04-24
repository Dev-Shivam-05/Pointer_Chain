#include<iostream>
using namespace std;

int main()
{
    int num_1; 

    cout << "Enter A NUmber :- ";
    cin >> num_1;

    int *pointer_p,**pointer_q;

    pointer_p = &num_1;
    pointer_q = &pointer_p;

    cout << "The Inputed Vale Is :- "<< **pointer_q <<"." << endl;
    cout << "The Address Of First Pointer Is :- " << *pointer_q << endl;
    cout << "The Address Of Second Pointer Is :- " << pointer_q << endl;
    return 0;
}