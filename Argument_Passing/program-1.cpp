// Passiing A Value
#include<iostream>
using namespace std;


void add(int x, int y);
void sub(int x, int y);
void prod(int x, int y);
void division(int x, int y);
void module(int x, int y);

int main()
{
    int num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;

    cout << "Enter Another Number :- ";
    cin >> num_2;

    add(num_1,num_2);
    sub(num_1,num_2);
    prod(num_1,num_2);
    division(num_1,num_2);
    module(num_1,num_2);

    return 0;
}

void add (int x, int y)
{
    cout << "The Sum Of "<< x <<" And "<< y <<" is :- " << x + y << endl;  
}
void sub (int x, int y)
{
    cout << "The Subtraction Of "<< x <<" And "<< y <<" is :- " << x - y << endl;  
}
void prod (int x, int y)
{
    cout << "The Product Of "<< x <<" And "<< y <<" is :- " << x * y << endl;  
}
void division (int x, int y)
{
    cout << "The Division Of "<< x <<" And "<< y <<" is :- " << x / y << endl;  
}
void module (int x, int y)
{
    cout << "The Module Of "<< x <<" And "<< y <<" is :- " << x % y << endl;  
}