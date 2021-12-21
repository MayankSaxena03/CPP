#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    // if-else
    /*Statements within "if" will run if the condition in "if" is true otherwise statements within "else" will execute*/
    if (age >= 18)
    {
        cout << "You can vote\n";
    }
    else
    {
        cout << "You cannot vote\n";
    }

    //if-else if-else
    /* Statements within "if" will run if the condition in "if" is true. If the condition in "if" is false conditions within "else-if" will be checked. If they are true then the statements within "else-if" will execute. If none of the conditions are true in "if" and "else-if", statements within "else" will execute. */
    /* We can add as many "else-if" between if-else as we like */

    if (age == 18)
    {
        cout << "You just turned 18\n";
    }
    else if (age > 18)
    {
        cout << "You can vote\n";
    }
    else
    {
        cout << "You cannot vote\n";
    }

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
