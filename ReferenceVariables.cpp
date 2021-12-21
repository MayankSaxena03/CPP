/*
    Reference variable is an alternate name of already existing variable. It cannot be changed to refer another variable and should be 
    initialized at the time of declaration and cannot be NULL. The operator '&' is used to declare reference variable.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;      /* Created a variable */
    int &y = x; /* Created a reference variable y which references to x. "y is another name given to x". */
    x = 32;     /* Changing value of x */
    cout << "Value of x : " << x << endl;
    cout << "Value of y : " << y << endl;
    x = 45; /* Changing value of x. */
    cout << "Value of x after changing value : " << x << endl;
    cout << "Value of y after changing value : " << y << endl;
    return 0;
}
