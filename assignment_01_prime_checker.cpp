// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 1
// =============================================================================
//
// TASK: Prime Number Checker
//
// Write a C++ program that checks whether a given number is prime.
//
// A prime number is a whole number greater than 1 that has no divisors
// other than 1 and itself (e.g., 2, 3, 5, 7, 11, 13 ...).
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLES
// -----------------------------------------------------------------------------
//
//   Enter a number: 7
//   7 is a prime number.
//
//   Enter a number: 10
//   10 is NOT a prime number.
//
//   Enter a number: 1
//   1 is NOT a prime number.
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement the logic inside a function (see scaffold below).
// - Numbers less than 2 are NOT prime — handle this inside the function.
// - The main() function must call isPrime() and print the result.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    bool result = isPrime(number);

    if (result)
    {
        cout << "\nNumber is prime";
    }
    else
    {
        cout << "\nNumber is not prime";
    }

    return 0;
}


    

   
