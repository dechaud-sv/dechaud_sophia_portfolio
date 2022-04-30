Sophia DeChaud
CSCE306, Spring 2022
Lotto Project
Project goal: Create a program that will use an advanced random number generator to simulate lottery picks. The user may enter their own picks and play against the computer’s picks to curb their own lottery ticket purchases. This program will aim to show lottery ticket buyers just how easy and often it is that they lose money rather than win money.
Intended Audience: Avid lotto fans, those who spend too much on real lottery tickets, lovers of probability, and those who wish to play fun little games to test their divination and intuition against the computer.

Random Number Generator Class: LottoGame.h, LottoGame.cpp (Child Class)
Constructor: Ticket(int size): This method should take an integer size to generate that many numbers below 100 (or other value depending on the game) to a vector. If a game is selected size will be hardcoded based on that game (ex. 6 numbers for Lotto, 4 for pick 4).
sort_list(vector container): This method will sort the numbers outputted from lowest to highest
This vector should not be able to be edited after sorting.

Analysis Class: Account.h, Account.cpp (Parent class)
This class will take a username and starting dollar amount to keep a running total of winnings/losses for one user as well as their record. This data will be stored in a text file based on the username given.
Main:
Main will control the games. The menus will all be controlled in main (which mode you would like to use and then which type of game you would like to play). Finally, main will prompt user for input to decide if the program should terminate or the user should be brought back to the menu to play/pick again
