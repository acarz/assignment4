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
    cout << " " << endl;
    cout << "Hello CERN" << endl;
    cout << "________________________" << endl;
    cout << "Assignment 4, Question 2 " << endl;
    // Prime number means if a number can not divisible other than 1 and itself without remainder


    int a = 0;
    int b = 0;
    int n=2;
    while( a <=10001)
    {
        for (int i = 1; i <=n ;i++)
            // Every number can be divided by 1 without remainder so we start from 2
        {
            int count = 0;

            if (n % i == 0)
            {
                count++;
            }
            if (count==2){
                a++; 
                b=i;
            } 
            count=0;
            
        }
        n++;
    }
    
            cout << "The 10001st prime number is : " << b <<"\n" << endl ;

        return 99;
}

