This is the assignment of week one of the course "Introduction to Embedded Systems Software and Development Environments"
Author of this assignment is : Eng. Muhammad Alaa
Date: FRI 6.11.2020 

through this assignment you can find , as required , two files stats.h and stats.c 

Description:

In this programming assignment you will create a simple application that performs statistical analytics on a dataset. This assignment will help you get re-oriented with c-programming syntax and host machine compilation. We begin by setting up a version control repository on your local machine. You will then develop and test your code there. When complete, you will upload a zip of your repository to Coursera. Please read through all instructions before starting.

After completing this assignment, you will be able to:

Write a simple programming assignment that prints statistics to the command line using a variety of c-programming operators and features.
Perform Compilation with GCC and execute output files from the command line.
Use git Version control to create a repository to version control code.

The stats.c and stats.h files have some premade function comment format for you to enter data into. You will need to include your name as the author, the date, and a small description of the file at the top. If you open stats.c you will see you have been given part of a main() function. Main has defined an array of 40 characters for testing. At the top of README.md, add your name and description of the repository and project.
main() - The main entry point for your program
print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
print_array() - Given an array of data and a length, prints the array to the screen
find_median() - Given an array of data and a length, returns the median value
find_mean() - Given an array of data and a length, returns the mean
find_maximum() - Given an array of data and a length, returns the maximum
find_minimum() - Given an array of data and a length, returns the minimum
sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )

To print data to the screen, you can use the printf function provided by the standard IO library (stdio.h). Each printed value should be nicely formatted with an indicator of the variable or index for each statistic value printed.

Most of the functions in the stats.c file require 2 input parameters and one return value:

Input: A unsigned char pointer to an n-element data array
Input: An unsigned integer as the size of the array
Output: An unsigned char result from the function 



