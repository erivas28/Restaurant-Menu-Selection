//Declare libraries and headers
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

//Start dinnerOptions Function
//Please refer to 'breakfastOptions.cpp' for comments on this function.
//As mentioned there, all comments are identical for 'breakfastOptions.cpp',
//'lunchOptions.cpp', and 'dinnerOptions.cpp'
double dinnerOptions(double &previousTotal)
{
    int choice;
    string line;
    const double RATE = 0.095;
    double drink = 0.0;
    double food = 0.0;
    double sum = food + drink;
    double tax = sum * RATE;
    double total = 0.0;

    cout << "Dinner menu is: " << endl;
    ifstream myfile("DINNER.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << endl;
        }

        char dinnerChoice;
        cin >> dinnerChoice;
        if (dinnerChoice == 'a')
        {
            double food = 16.99;

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
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
                        << endl << "and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
                        << endl << "and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
                        << endl << "and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
                        << endl << "and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
                        << endl << "and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
                        << endl << "and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
                        << endl << "and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
                        << endl << "and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled salmon with rice and vegetables,"
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
        else if (dinnerChoice == 'b')
        {
            double food = 13.99;

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
                    cout << "You ordered a Pepperoni pizza deep dish, and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pepperoni pizza deep dish, and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pepperoni pizza deep dish, and a"
                        << endl << "Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pepperoni pizza deep dish, and a"
                        << endl << "Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pepperoni pizza deep dish, and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pepperoni pizza deep dish, and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pepperoni pizza deep dish, and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pepperoni pizza deep dish, and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pepperoni pizza deep dish, and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (dinnerChoice == 'c')
        {
            double food = 14.99;

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
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Steak skillet with green and red peppers,"
                        << endl << "grilled onions, and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (dinnerChoice == 'd')
        {
            double food = 15.99;

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
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
                        << endl << "and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
                        << endl << "and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
                        << endl << "and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
                        << endl << "and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
                        << endl << "and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
                        << endl << "and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
                        << endl << "and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
                        << endl << "and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Pulled pork sandwich w/ diced potatoes,"
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
        else if (dinnerChoice == 'e')
        {
            double food = 12.99;

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
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
                        << endl << "and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
                        << endl << "and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
                        << endl << "and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
                        << endl << "and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
                        << endl << "and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
                        << endl << "and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
                        << endl << "and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
                        << endl << "and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered Spaghetti and Meatballs w/ marinara sauce,"
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
        else
        {
            cout << "Sorry that was an invalid Dinner Choice!" << endl;
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open Menu!" << endl;
    }

    return total;
}//End dinnerOptions Function