# Gaming-Store-OOP-
🎯 Objective

The goal of this program is to build an interactive Game Shop System that allows users to:

Choose between different gaming consoles (Xbox or PlayStation).

Browse available games and their prices.

Select games to purchase.

Get a grand total of all selected games.

The system also includes exception handling (for invalid inputs) and demonstrates object-oriented programming principles.

🕹️ Overview of the Program

Our program simulates a small-scale game shop.
When the user starts:

They are prompted to enter their phone number.

They select which console they’d like to browse — Xbox or PS4.

The program displays the list of games, their availability, and price.

The user chooses a game to buy, and the cost is added to the total.

The program then asks whether the user wants to continue shopping (Y/N).

The final grand total is displayed before exit.

If any exception occurs (like invalid input), the program gracefully terminates with an appropriate message.

🧠 Concepts Used

Concept------------------------------Description

Inheritance---------------------------xbox and PS classes inherit from the base GameShop class.

Operator Overloading---------------The + operator is overloaded to sum up prices of multiple game purchases.

Exception Handling------------------Used to handle invalid inputs such as wrong console or game choice.

Static Variables-----------------------Used to track stock levels for different games.

Encapsulation------------------------Game details and pricing are protected within classes.

⚙️ Classes & Functions

GameShop (Base Class):
Handles basic shop functions like displaying messages, getting console type, and managing prices.

xbox (Derived Class):
Handles Xbox game selections, stock updates, and pricing.

PS (Derived Class):
Handles PlayStation game selections and availability.

operator+ Overload:
Used to add the price of two selected games and calculate total cost.

main() Function:
Controls program flow, handles user interaction, and calculates grand total.
