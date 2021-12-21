#include <iostream>

using namespace std;

int main()
{

    int age;
    cout << "Enter your age : ";
    cin >> age;

    //Switch Case
    /*Switch case is used to compare value of a variable to constants and execute different statements fro different results.*/
    /*Switch case statements can only be used for statements which are either int or char*/
    /*break is used to come out of switch case. If we do not use break, all the statements of cases below true case will execute.*/
    /*default statement will run if all the cases are false*/

    switch (age)
    {
    case 3:
        cout << "Your age is 3\n";
        break;

    case 13:
        cout << "Your age is 13\n";
        break;

    case 23:
        cout << "Your age is 23\n";
        break;

    default:
        cout << "Your age is not 3, 13, 23.\n";
    }
    /* Switch Condition will check if any of the case value matches with the value of age and will run the corresponding statements. If all the cases are false, default statement will execute. */

    return 0;
}