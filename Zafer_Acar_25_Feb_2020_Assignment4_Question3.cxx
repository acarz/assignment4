//////////////////////////////////////////////
//
// Author : Zafer Acar <zafer.acar@cern.ch>
//
// Description : Assignment 4, Question 3
//
//////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

// The sum of the squares of the first n natural numbers
int SumSquare(int n)
{
    return (((n) * (n + 1) * (2 * n + 1)) / 6);
}

// The square of the sum of the first n natural numbers
int SquareSum(int n)
{
    return (pow(((n * (n + 1)) / 2), 2));
}

// The difference between the sum of the squares of the first n natural numbers and the square of the sum
int Difference(int n)
{
    return SquareSum(n)  - SumSquare(n);
}

int main()
{

    cout << " " << endl;
    cout << "Hello CERN" << endl;
    cout << "________________________" << endl;
    cout << "Assignment 4, Question 3 " << endl;

    cout << " " << endl;
    
    cout << "The sum of the squares of the first 100 natural numbers is " << SumSquare(100) << endl;
    cout << "The square of the sum of the first 100 natural numbers is " << SquareSum(100) << endl;
    
    cout << " " << endl;
    
    cout << "The difference between the sum of the squares of the first 100 "<< "\n" 
        << "natural numbers and the square of the sum is " << Difference(100) << endl ;
    
    cout << " " << endl;

    return 99;
}
