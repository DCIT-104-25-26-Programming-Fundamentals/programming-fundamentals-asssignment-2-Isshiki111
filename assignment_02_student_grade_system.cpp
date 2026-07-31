// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 2
// =============================================================================
//
// TASK: Student Grade System
//
// Write a C++ program that reads a student's score and outputs the
// corresponding letter grade based on the scale below.
//
// Grading Scale:
//   Score 80 – 100  →  Grade A
//   Score 70 – 79   →  Grade B
//   Score 60 – 69   →  Grade C
//   Score 50 – 59   →  Grade D
//   Score below 50  →  Grade F
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLES
// -----------------------------------------------------------------------------
//
//   Enter student score (0-100): 85
//   Grade: A
//
//   Enter student score (0-100): 73
//   Grade: B
//
//   Enter student score (0-100): 45
//   Grade: F
//
//   Enter student score (0-100): 110
//   Error: Score must be between 0 and 100.
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST use functions (see scaffold below).
// - Validate the score inside getGrade(). If it is out of range, return '\0'
//   (null character) and let main() print the error message.
// - Use if / else if / else to determine the grade.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

int main()
{
    int grade;

    cout << "Enter your grade: ";
    cin >> grade;

    if (grade >= 80 && grade <= 100)
    {
        cout << "Grade A";
    }
    else if (grade >= 70 && grade <= 79)
    {
        cout << "Grade B";
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "Grade C";
    }
    else if (grade >= 50 && grade <= 59)
    {
        cout << "Grade D";
    }
    else if (grade >= 0 && grade < 50)
    {
        cout << "Grade F";
    }
    else
    {
        cout << "Error: Score must be between 0 and 100.";
    }

    return 0;
}

   
    