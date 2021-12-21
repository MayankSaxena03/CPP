#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    //Break example
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
            /* when the value of i becomes 3, the break statemennt will run causing the loop to end. It is used when we need to come out of loop when we need */
        }
        cout << i;
    }

    cout << endl; /* Line Break */

    //Continue Example
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
            /* when the value of i becomes 3, the continue statemennt will run causing the loop to skip code below continue statement and run next iteration. It is used when we need to skip an iteration of loop when we need */
        }
        /* Below statements will be skipped if the value of i is 3 */
        cout << i;
    }
    return 0;
}