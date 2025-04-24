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

    cout << "The Cube Of The Inputed Number "<< *pointer_p <<" Is :- " << *pointer_p * **pointer_q * ***pointer_r << endl;
    return 0;
}