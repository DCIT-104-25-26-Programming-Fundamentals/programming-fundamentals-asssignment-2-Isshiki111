// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLE
// -----------------------------------------------------------------------------
//
//   How many numbers? 5
//   Enter number 1: 4
//   Enter number 2: 7
//   Enter number 3: 2
//   Enter number 4: 9
//   Enter number 5: 1
//
//   Results:
//   Sum:     23
//   Average: 4.6
//   Maximum: 9
//   Minimum: 1
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement each calculation in its own function (see scaffold).
// - You may NOT use any standard library functions like accumulate(), max(),
//   or min(). Implement the logic yourself using loops.
// - N must be a positive integer. If the user enters 0 or a negative number,
//   print an error message and stop.
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int n_numbers;

int sum(int n[100])
{
    int accumulate = 0;

    for (int i = 0; i < n_numbers; i++)
    {
        accumulate += n[i];
    }

    return accumulate;
}

int max(int n[100])
{
    int largest = n[0];

    for (int i = 1; i < n_numbers; i++)
    {
        if (n[i] > largest)
        {
            largest = n[i];
        }
    }

    return largest;
}

int min(int n[100])
{
    int smallest = n[0];

    for (int i = 1; i < n_numbers; i++)
    {
        if (n[i] < smallest)
        {
            smallest = n[i];
        }
    }

    return smallest;
}

float average(int n)
{
    return (float)n / n_numbers;
}

int main()
{
    cout << "How many numbers? ";
    cin >> n_numbers;

    if (n_numbers <= 0)
    {
        cout << "Error: Number of values must be positive.";
        return 0;
    }

    int numbers[100];

    for (int i = 0; i < n_numbers; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int store = sum(numbers);

    cout << "\nResults:\n";
    cout << "Sum: " << store << endl;
    cout << "Average: " << average(store) << endl;
    cout << "Maximum: " << max(numbers) << endl;
    cout << "Minimum: " << min(numbers) << endl;

    return 0;
}