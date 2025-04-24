#include<iostream>
using namespace std;

int main()
{
    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    int *pointer_a,**pointer_b,***pointer_c;

    pointer_a = &num_1;
    pointer_b = &pointer_a;
    pointer_c = &pointer_b;

    cout << "The Value Of A Is :- " << pointer_a << endl;
    cout << "The Value Of B Is :- " << *pointer_b << endl;
    cout << "The Value Of C Is :- " << **pointer_c << endl;

    return 0;
}