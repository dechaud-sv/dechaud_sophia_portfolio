# dechaud_sophia_portfolio
Sophia DeChaud
CSCE306, Spring 2022
Lotto Project
Project goal: Create a program that will use an advanced random number generator to simulate lottery picks. The user may enter their own picks and play against the computer’s picks. If time allows, the project will also feature a menu from which the user can choose what lottery games it would like to play (Lotto, Pick 3, etc.). From these games, the user will also be able to see the computer’s random picks to use for their own lottery ticket purchases if they wish. Finally, the random number generator should feature an analysis portion. In this, the generator should run in a for loop, log the numbers generated, and output the mode and range to the user.

Intended Audience: Avid lotto fans, lovers of probability, and those who wish to play fun little games to test their divination and intuition against the computer.

Random Number Generator Class: RandomNum.h, RandomNum.cpp (Parent Class)
Constructor: RandomNum(int size): This method should take an integer size to generate that many numbers below 100 (or other value depending on the game) to a vector. If a game is selected size will be hardcoded based on that game. Otherwise, for statistical analysis purposes, size can be inputted by user to create a loop that will offer a large sample size.
sort_list(vector container): This method will sort the numbers outputted from lowest to highest
This vector should not be able to be edited after sorting.

Analysis Class: Stats.h, Stats.cpp (Child Class)
find_mode() method: This method should review the numbers in the vector, search through them, and find which number occurred most to output to the user.
find_range() method: This method will take the sorted vector and subtract the first value from the last to find the range of the values to output to the user.

Main:
Main will create Random number vector objects using the Random class. Then main will call the methods of Stats to output the analysis. Main will also control the game. It will ask users to input a certain number of integers (based on size parameter given to RandomNum class) to play against the computer. Give a score of 1 point for each number that is the same as that of the computer’s pick. Main will also control the menu to allow the user to choose what game they would like to play.
