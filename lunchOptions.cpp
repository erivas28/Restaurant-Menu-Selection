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

//Start lunchOptions Function
//Please refer to 'breakfastOptions.cpp' for comments on this function.
//As mentioned there, all comments are identical for 'breakfastOptions.cpp',
//'lunchOptions.cpp', and 'dinnerOptions.cpp'
double lunchOptions(double &previousTotal)
{
    //int choice;
    string line;
    const double RATE = 0.095;
    double drink = 0.0;
    double food = 0.0;
    double sum = food + drink;
    double tax = sum * RATE;
    double total = 0.0;

    cout << "Lunch menu is: " << endl;
    ifstream myfile("LUNCH.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        char lunchChoice;
        cin >> lunchChoice;
        if (lunchChoice == 'a')
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
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Lettuce Tomato Sandwich w/ French Fries,"
                        << endl << "and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid choice, sorry!" << endl;
                }
            }
        }
        else if (lunchChoice == 'b')
        {
            double food = 10.99;

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
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Caesar Salad w/ grilled chicken, " << endl
                        << "parmesan cheese, and caesar dressing, and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (lunchChoice == 'c')
        {
            double food = 10.99;

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
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Grilled cheese (Swiss or American cheese?)"
                        << endl << "w/ French Fries, and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (lunchChoice == 'd')
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
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Bacon Cheeseburger w/ bbq sauce, tomatoes,"
                        << endl << "and lettuce w/ a side of onion rings, and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid drink choice, sorry!" << endl;
                }
            }
        }
        else if (lunchChoice == 'e')
        {
            double food = 11.99;

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
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a Water" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'b')
                {
                    double drink = 1.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a Coffee" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'c')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a Hot Chocolate" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'd')
                {
                    double drink = 1.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a Orange Juice" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'e')
                {
                    double drink = 2.50;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a 12oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'f')
                {
                    double drink = 2.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a 16oz Soda" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'g')
                {
                    double drink = 5.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a 16oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'h')
                {
                    double drink = 7.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a 20oz Beer" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else if (drinkChoice == 'i')
                {
                    double drink = 11.99;
                    cout << "--------------------------------------------------------" << endl;
                    cout << "You ordered a Clam chowder soup (breadbowl or plate),"
                        << endl << "w/ side of potato chips, and a Cocktail" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    total = previousTotal + totalPrice(food, drink, previousTotal, tax, total);
                }
                else
                {
                    cout << "Invalid choice of drink, sorry!" << endl;
                }
            }
        }
        else
        {
            cout << "--------------------------------------------------------" << endl;
            cout << "Sorry that was an invalid Lunch choice!" << endl;
            cout << "--------------------------------------------------------" << endl;
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return total;
}//End lunchOptions Function