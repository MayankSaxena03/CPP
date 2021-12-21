/*
    Function overloading is a feature of object oriented programming where two or more functions can have the same name but different parameters.

    When a function name is overloaded with different jobs it is called Function Overloading.

    In Function Overloading “Function” name should be the same and the arguments should be different.
*/

#include <iostream>

using namespace std;

/* Function which returns sum of 2 numbers */
int sum(int a, int b)
{
    return a + b;
}

/* Function which returns sum of 2 numbers */
int sum(int a, int b, int c)
{
    return a + b + c;
}

/* Volume of cube */
float volume(float a)
{
    return a * a * a;
}

/* Volume of cylinder */
float volume(float radius, float height)
{
    return 3.14 * radius * radius * height;
}

/* Volume of cuboid */
float volume(float length, float breadth, float height)
{
    return length * breadth * height;
}

int main()
{
    cout << "The sum of 2 and 5 is " << sum(2, 5) << endl;       /* Function "sum" with 2 formal argumanets will be called while running this statement */
    cout << "The sum of 2, 5 and 8 is " << sum(2, 5, 8) << endl; /* Function "sum" with 3 formal argumanets will be called while running this statement */
    cout << "Volume of cube with length 3 is " << volume(3) << endl; /* Function "volume" with 1 formal argument will be called */
    cout << "Volume of cylinder with radius 2 and height 5 is " << volume(2, 5) << endl; /* Function "volume" with 2 formal argument will be called */
    cout << "Voulume of cuboid with length, breadth and height of 2, 5, 8 respectively is " << volume(2, 5, 8) << endl; /* Function "volume" with 3 formal argument will be called */
    return 0;
}