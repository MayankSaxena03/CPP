#include <iostream>

using namespace std;

int main()
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
    return 0;
}