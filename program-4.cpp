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

    cout << "The VAlue Of Pointer P Is " << **pointer_q << endl;
    
    int new_num_1;
    
    cout << "Enter A Numbber To Update :- ";
    cin >> new_num_1;
    
    pointer_p = &new_num_1;
    pointer_q = &pointer_p;
    
    cout << "The Updated Value Of Pointer P Is " << **pointer_q << endl;

    return 0;
}