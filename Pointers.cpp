/*
    * Pointer is a variable which stores address of another variable.
    * Can be of type int, char, array or any other pointer.
    * Size is dependent on architecture. It takes 2 bytes on 32 bit architecture.
    * Can be declared using '*' (asterisk) symbol.
    * '&' is the "address of" operator and it returns address of the variable.
    * '*' is the "dereference" operator and is used to get value at given address. It is also known as "indirection operator".
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int a = 76;
    int *pointer = &a;

    /* Accessing address of 'a' through "address of" operator. */
    cout << "Address of 'a' is " << &a << endl;                                 /* Here we found address of 'a' using "address of" operator. */
    cout << "Address of 'a' calculated through pointer is " << pointer << endl; /* pointer has the address of 'a' stored. So it returns address of 'a'. */

    /* Accessing value of 'a' through "derefernce" operator. */
    cout << "Value of 'a' is " << a << endl;
    cout << "Value of 'a' calculated through pointer is " << *pointer << endl; /* pointer has the address of 'a'. So, "*pointer" is returning the value of 'a' */

    /* Pointer pointing to a pointer */
    int **p = &pointer; /* This pointer 'p' stores address of 'pointer'. To store the address of pointer 'p' in another pointer we would use -> int ***c = &p; Pointer 'c' will store address of pointer 'p' if we declare like this. */
    cout << "Address of 'pointer' is " << &pointer << endl;
    cout << "Address of 'pointer' calculated through 'p' is " << p << endl;

    cout << "Address stored in 'pointer' variable is " << *p << endl;
    cout << "Value stored at the address stored in pointer variable is " << **p << endl;
    return 0;
}
