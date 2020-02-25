//////////////////////////////////////////////
//
// Author : Zafer Acar <zafer.acar@cern.ch>
//
// Description : Assignment 4, Question 1
//
//////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello CERN" << endl;
    cout << "--------------" << endl;
    cout << " Assignment 4, Question 1 " << endl;

    // These three variables are what is going to start our
    // Fibonaccai sequence, going from 1 to n.
    int a1 = 1;
    int b1 = 2;
    int x = 0;

    // The total summation
    int sum;

    // Do while loop that runs until the terms in the 
    // Fibonaccai sequence whose values do not exceed
    // four million
    do
    {
        x = a1 + b1;
        
        // Checking if the value that needs to be added to
        // the summation is an even-valued term.
        if(b1 % 2 == 0)
        {
            // Adds the even-valued term to the summation
            sum += b1;
        }

        a1 = b1;
        b1 = x;
    } while (b1 <= N);

    // Prints the sum of the even-valued terms
    cout << "The sum of the even-valued terms is: "<< sum << '\n';

    return 99;
}
