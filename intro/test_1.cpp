// First test for ADC learning

// #include <errno.h>
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
#include <iostream>
using namespace std;

int compute_sum(int a, int b);

int main(int argc, char *argv[])
{
    int in_a   = 0;
    int in_b   = 0;
    int result = 0;

    bool a_valid = false;
    bool b_valid = false;

    cout << "This program computes the sum of 2 integers.\n";
    cout << "The value of the integers must be in the range [-1000, 1000].\n\n";

    do
    {
        cout << "Enter the first value.\n> ";
        cin >> in_a;
        if ( in_a < -1000 || in_a > 1000 )
        {
            cout << "Error - first value out of range.\n";
        }
        else
        {
            a_valid = true;
        }
    } while ( !a_valid );

    do
    {
        cout << "Enter the second value.\n> ";
        cin >> in_b;
        if ( in_b < -1000 || in_b > 1000 )
        {
            cout << "Error - second value out of range.\n";
        }
        else
        {
            b_valid = true;
        }
    } while ( !b_valid );

    result = compute_sum (in_a, in_b);

    cout << "Result: " << result << ".\n";
}

int compute_sum(int a, int b) {
    // Write your solution here
    // This method will be called like that:
    // compute_sum(500, -5);
    int sum = 0;

    sum = a + b;

    return sum;
}
