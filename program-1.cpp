#include<iostream>
using namespace std;

int main()
{
    int *pointers_p,*pointers_q,num_1,num_2;

    cout << "Enter A Number : ";
    cin >> num_1;
    cout << "Enter Another Number : ";
    cin >> num_2;

    pointers_p = &num_1;
    pointers_q = &num_2;

    cout << "The Sum Of "<< *pointers_p <<" And "<< *pointers_q <<" Is :- " << *pointers_p + *pointers_q << endl;
    cout << "The Subtraction Of "<< *pointers_p <<" And "<< *pointers_q <<" Is :- " << *pointers_p - *pointers_q << endl;
    cout << "The Product Of "<< *pointers_p <<" And "<< *pointers_q <<" Is :- " << *pointers_p * *pointers_q << endl;
    cout << "The Division Of "<< *pointers_p <<" And "<< *pointers_q <<" Is :- " << *pointers_p / *pointers_q << endl;
    cout << "The Module Of "<< *pointers_p <<" And "<< *pointers_q <<" Is :- " << *pointers_p % *pointers_q << endl;
    return 0;
}