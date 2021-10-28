//Include libraries and headers
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "menuSelection.h"
#include "breakfastOptions.h"
#include "lunchOptions.h"
#include "dinnerOptions.h"
#include "totalPrice.h"
using namespace std;

//Start breakfastOptions Function
//Same process for If statement for breakfastChoice 'a', 'b', 'c', 'd', and 'e'.
//This process repeats itself for all breakfast choices, lunch choices,
//and dinner choices, which are in under 'lunchOptions.cpp' and 'dinnerOptions.cpp'
//To save space from writing repetitive comments, I will only write them for this breakfast
//options function, as all other functions are the exact same format.
double breakfastOptions(double &previousTotal)
{
    //Declare variables
    int choice;
    string line;
    const double RATE = 0.095;
    double drink = 0.0;
    double food = 0.0;
    double sum = food + drink;
    double tax = sum * RATE;
    double total = 0.0;

    //Print statement to display to user the breakfast menu
    cout << "Breakfast menu is: " << endl;
    //Reads from file titled "BREAKFAST.txt"
    ifstream myfile("BREAKFAST.txt");
    //Start If statement
    //If the file opens, continue with argument
    if (myfile.is_open())
    {
        //While loop to utilize getline function and read the whole .txt file
        while (getline(myfile, line))
        {
            //Print statement to display whole .txt file
            cout << line << endl;
        }
        //Declare variable
        char breakfastChoice;
        //User input for their breakfast choice
        cin >> breakfastChoice;
        //Start nested If statement
        //If user selects char 'a', continue with argument
        //This if statement will repeat itself for all 5 different options,
        //'a', 'b', 'c', 'd', and 'e'
        if (breakfastChoice == 'a')
        {
            //Declare value for breakfast option a
            double food = 6.99;
            //Reads from file titled "DRINKS.txt"
            ifstream myfile("DRINKS.txt");
            //Start nested If statement
            //If the file opens, continue with argument
            if (myfile.is_open())
            {
                //While loop to utilize getline function and read the whole .txt file
                while (getline(myfile, line))
                {
                    //Print statement to display whole .txt file
                    cout << line << endl;
                }
                //Delare variable
                char drinkChoice;
                //User input for drink choice
                cin >> drinkChoice;
                //Start nested If statement
                //If user selects char 'a', continue with argument
                //This if statement will repeat itself for all 9 different
                //drink options
                if (drinkChoice == 'a')
                {
                    //Declare value for drink 'a'
                    double drink = 0.99;
                    //Print statement to display to user their order 
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    //Algorith for total price, calling the totalPrice Function and adding it
                    //with the value for previousTotal, where previousTotal, is the summation of all
                    //previous orders, starting at 0.
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If the drink choice is 'b', continue with argument
                else if (drinkChoice == 'b')
                {
                    //Declare value for drink 'b'
                    double drink = 1.50;
                    //Display user their order of breakfast 'a', with drink 'b'
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If the drink choice is 'c', continue with argument
                else if (drinkChoice == 'c')
                {
                    //Declare value for drink 'c'
                    double drink = 1.99;
                    //Display user their order of breakfast 'a', with drink 'c'
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If the drink chocie is 'd', continue with argument
                else if (drinkChoice == 'd')
                {
                    //Declare value for drink 'd'
                    double drink = 1.99;
                    //Display user their order of breakfast 'a', with drink 'd'
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If drink choice is 'e', continue with argument
                else if (drinkChoice == 'e')
                {
                    //Declare value for drink 'e'
                    double drink = 2.50;
                    //Display user their order of breakfast 'a', with drink 'e'
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If drink choice is 'f', continue with argument
                else if (drinkChoice == 'f')
                {
                    //Declare value for drink 'f'
                    double drink = 2.99;
                    //Display user their order of breakfast 'a', with drink 'f'
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If drink choice is 'g', continue with argument
                else if (drinkChoice == 'g')
                {
                    //Declare value for drink 'g'
                    double drink = 5.99;
                    //Display user their order of breakfast 'a', with drink 'g'
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If drink choice is 'h', continue with argument
                else if (drinkChoice == 'h')
                {
                    //Declare value for drink 'h'
                    double drink = 7.99;
                    //Display user their order of breakfast 'a', with drink 'h'
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If drink choice is 'i', continue with argument
                else if (drinkChoice == 'i')
                {
                    //Declare value for drink 'i'
                    double drink = 11.99;
                    //Display user their order of breakfast 'a', with drink 'i'
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a slice of steak and 2 eggs w/ diced potatoes,"
                        << endl << "and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                //If drink choice is not what is presented in menu, continue with argument
                else
                {
                    //Print statement to display to user they had an invalid drink choice
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (breakfastChoice == 'b')
        {
            double food = 7.99;

            ifstream myfile("DRINKS.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << endl;
                }
                char drinkChoice;
                cin >> drinkChoice;
                if (drinkChoice == 'a')
                {
                    double drink = 0.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 2 eggs with 2 bacon strips and hashbrowns,"
                        << endl << "and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (breakfastChoice == 'c')
        {
            double food = 9.99;

            ifstream myfile("DRINKS.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << endl;
                }

                char drinkChoice;
                cin >> drinkChoice;
                if (drinkChoice == 'a')
                {
                    double drink = 0.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 Avocado Toast with sundried tomatoes"
                        << " and" << endl << "arugula cheese, and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (breakfastChoice == 'd')
        {
            double food = 9.99;

            ifstream myfile("DRINKS.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << endl;
                }

                char drinkChoice;
                cin >> drinkChoice;
                if (drinkChoice == 'a')
                {
                    double drink = 0.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "3 hotcakes w/ a side of toast (white or wheat?),"
                        << endl << "and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (breakfastChoice == 'e')
        {
            double food = 5.99;

            ifstream myfile("DRINKS.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << endl;
                }

                char drinkChoice;
                cin >> drinkChoice;
                if (drinkChoice == 'a')
                {
                    double drink = 0.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;

                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered 1 bowl of plain oatmeal with fresh fruit,"
                        << endl << "and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        //If breakfast choice was not 1, 2, 3, 4, or 5, then continue with argument
        else
        {
            //Print statement with border to display to user that they selected an invalid
            //breakfast choice
            cout << "--------------------------------------------------------" << endl;
            cout << "Sorry that was an invalid Breakfast choice!" << endl;
            cout << "--------------------------------------------------------" << endl;
        }
        //Close the file titled 'BREAKFAST.txt'
        myfile.close();
    }
    //If the file 'BREAKFAST.txt' cannot be opened, continue with argument
    else
    {
        //Print statement to display to user that file could not be opened
        cout << "Unable to open file!" << endl;
    }
    //Return the total value, which is the value for user's order
    return total;
}//End breakfastOptions Function