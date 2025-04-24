#include<iostream>
using namespace std;

int main()
{
    int num_1;

    cout << "Enter A NUmber : ";
    cin >> num_1;

    int &ref_num_1 = num_1;

    cout << "The Inputed Value Is :- "<< ref_num_1 << "." << endl;
    
    cout << "Enter A VAlue To Update :- ";
    cin >> ref_num_1;
    
    cout << "The Updated Value Is :- "<< ref_num_1 << "." << endl;
    return 0;
}