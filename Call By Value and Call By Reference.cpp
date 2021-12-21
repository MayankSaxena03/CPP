/* 
    There are 2 ways to pass parameters in the function :
    1) Call By Value -> In parameters, the value of variable is passed. Changes made in function are not reflected in actual parameters or variables.
    2) Call By Reference -> In parameters, the address of variable is passed. Changes made in function are reflected in actual parameters or variables because we are changing value at a memory address, and not in any variable.
*/

#include <iostream>

using namespace std;

/* Call by Value Function */
void callByValue(int n)
{
    n = 39;
}

/* Call by Reference Function */
void callByReference(int *n)
{
    *n = 39; /* Changing value at address */
}

/* Call By Reference using reference variables */
/* Below function creates a reference variable which changes the value of actual parameter */
void callByReference2(int &n)
{
    n = 41;
}

int main()
{
    int a = 34;
    cout << "Value of 'a' : " << a << "\n";
    callByValue(a); /* Passing value as parameter in function i.e. calling the function by value */
    cout << "Value of 'a' after calling a function by value : " << a << "\n";
    callByReference(&a); /* Passing address in parameter i.e. calling the function by reference */
    cout << "Value of 'a' after calling a function by reference : " << a << "\n";
    callByReference2(a);
    cout << "Value of 'a' after calling another function which creates a reference variable : " << a << "\n";
    return 0;
}