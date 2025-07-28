# Experiment-5

*Code 1*
🔹 Purpose:
The program determines whether a given integer is even or odd.

🔸 Logic Explanation:
Input:

The user enters an integer number (num).

Check Even or Odd:

Using the modulus operator %, the program checks the remainder when num is divided by 2.

If num % 2 == 0, the number is even.

Otherwise, it is odd.

Output:

The program prints "Number is EVEN." if even.

Prints "Number is ODD." if odd.

🔸 Concepts Used:
Integer input/output

Modulus operator %

Conditional statements (if-else)

*Code 2*
🔹 Purpose:
This program checks whether a given character is a vowel or a consonant.

🔸 Logic Explanation:
Input:

The user inputs a single character ch.

Vowel Check:

The program compares ch with all vowel characters (both lowercase and uppercase):
'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'.

If ch matches any of these, it is identified as a vowel.

Consonant Check:

If ch does not match any vowel, it is considered a consonant.

Output:

Prints "Character is a VOWEL." or "Character is a CONSONANT." accordingly.

🔸 Concepts Used:
Character input/output

Logical OR operator (||)

Conditional statements (if-else)

*Code 3*
🔹 Purpose:
This program takes three integer inputs and determines which one is the largest.

🔸 Logic Explanation:
Input:

The user inputs three integers: num1, num2, and num3.

Compare Numbers:

The program uses nested if statements to compare the numbers:

Check if num1 is greater than both num2 and num3. If yes, num1 is largest.

Else check if num2 is greater than both num1 and num3. If yes, num2 is largest.

Else check if num3 is greater than both num1 and num2. If yes, num3 is largest.

Output:

Prints which number is the largest.

*Code 4*
🔹 Purpose:
This program takes a number input representing a month (1 to 12) and displays the corresponding month name using a switch statement.

🔸 Logic Explanation:
Input:

The user enters an integer (choice) representing their birthday month number (1 to 12).

Switch Statement:

The program uses a switch control structure to match the choice with cases 1 through 12.

Each case corresponds to a month name (e.g., 1 → January, 2 → February, etc.).

If a valid case is matched, it prints the corresponding month name.

If the input does not match any case (not between 1 and 12), the default case executes, prompting the user to enter a valid choice.

Output:

Displays the month name or an error message.

🔸 Concepts Used:
Integer input/output

switch-case control structure

default case for invalid inputs

*Code 5*
🔹 Purpose:
This program performs a basic arithmetic operation (addition, subtraction, division, multiplication) on two numbers based on the user’s choice.

🔸 Logic Explanation:
Input:

The user enters two floating-point numbers: num1 and num2.

The user then inputs an integer choice to select the desired operation:

1 for Addition

2 for Subtraction

3 for Division

4 for Multiplication

Operation Selection using switch:

The program uses a switch statement to determine which operation to perform based on the choice.

Each case executes the corresponding arithmetic operation and prints the result.

Invalid Input Handling:

If the choice is not between 1 and 4, the default case prints an error message.

🔸 Concepts Used:
Floating-point numbers (float)

Input/output (cin, cout)

switch-case control structure

Basic arithmetic operators

