# TipCalculator
Author: Angel Zaldivar

Goal: Calculate the Amount of Tip to be Given to a Restaurant Waitress/Waitor

This C++ program, authored by Angel Zaldivar, is designed to calculate and display the amount of tip to be given for a range of tip percentages. The user is prompted to enter the total bill, and the program then iterates through a range of tip percentages, displaying the calculated tip amount and total bill for each percentage.

Code Explanation:

The program begins by declaring several variables, including min_tip_percent, max_tip_percent, tip, and bill_total. min_tip_percent and max_tip_percent represent the minimum and maximum tip percentages, respectively. The tip variable is initialized to the minimum tip percentage.

The user is prompted to enter the total bill, and the input is stored in the variable bill_total.

The main processing and output are performed within a loop that iterates through tip percentages from the minimum to the maximum. For each iteration, the program calculates the tip amount and total bill using the current tip percentage and displays the results. The round function is used to round the calculated tip amount to the nearest integer.

The loop increments the tip percentage by 5% in each iteration, and the process continues until the tip percentage exceeds the maximum specified.

In summary, the program provides a dynamic tip calculator that allows the user to input the total bill, and it iterates through a range of tip percentages, displaying the calculated tip amount and total bill for each percentage. The goal is to help users easily determine the appropriate tip based on different percentages.





