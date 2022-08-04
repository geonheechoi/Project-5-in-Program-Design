# Project-5-in-Program-Design
Problem 1 – Multiple of 11 Checking if a number X is a multiple of another number Y is easy when it is small enough to be stored in a variable of integer type (e.g., int, long int). We just have to check if the remainder of the division of X by Y is zero (i.e., X%Y == 0). However, when the number is too large, this can be a tricky task. Luckily, when dealing with multiples of 11 (Y=11), there is another way of performing this check: if the difference of the sum of the digits at odd places and even places of X is 0 or a multiple of 11, then X is a multiple of 11 as well.

Considering that X can be a very large number (up to 1000 digits), can you write a program that
identifies multiples of 11?

Problem 2 – Command-line Arguments (Modify Project 2, Problem 2) (50 points)
In this program, you will modify your project 2, problem 2 program so that the word is a command-line
argument. An example run:
./a.out all
Output: In order
We define the command-line argument to be in order if the characters of the input
1) are alphabetic letters, lower case or upper case.
2) any two neighboring letters (regardless of case) are in order, for example, ‘c’ and ‘k’ are in order
but ‘s’ and ‘b’ is not in order because ‘c’ is less than ‘k’ and ‘s’ is greater than ‘b’, considering
their ASCII values.
3) if two neighboring letters are same, they are considered in order.
The program determines if the command-line argument is in order.
1) Assume the command-line argument contains two or more characters.
2) Convert the characters to lower case before comparison.
3) Character handling functions are allowed.
4) The program should include the following function:
 int in_order(char *word);
The function expects word to point to a string containing the string to be checked if it’s in order. The
function returns 1 if word is in order, and 0 otherwise.
5) The program should also check if the correct number of arguments are entered on the command
line. There should be only one argument besides ./a.out. If an incorrect number of
arguments are entered, the program should display a message and exit.
6) The main function displays the output.
