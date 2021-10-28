/* Restaurant POS system */
/* Allows user to select from menu options */
/* Program reads from files and write to a file for receipt option */
/* Rio Hondo CIT 125 Course, Professor David Liu, End of Term Project, Spring '21 */
/* Program created and revised by Eric Rivas */
/* Last revision made on 05/23/2021, by Eric Rivas */

/* Text files cannot have comments, therefore, each .txt file provided is to read from. */
/* They could be changed depending on 'manager' of the store, who wants to provide new menu items */
/* The only file that it would not read from will be the "Receipt.txt" file, which will be made, */
/* and the program will write to that file. */

//Declare libraries and Headers
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "menuSelection.h"
#include "breakfastOptions.h"
#include "lunchOptions.h"
#include "dinnerOptions.h"
#include "totalPrice.h"
using namespace std;

//Function prototypes
void menuSelection();
double breakfastOptions(double& previousTotal);
double lunchOptions(double& previousTotal);
double dinnerOptions(double& previousTotal);
double totalPrice(double& food, double& drink, double& sum, double& tax, double& total);


//Start Main function
int main()
{
    //Declare variables
    //Boolean variable for user to quit initial menu selection
    bool quit = false;
    int menuChoice;
    char newOrder;
    string line;
    double previousTotal = 0.0;
    //This is the tax rate, which is a constant,
    //allowing it to be changed in the backend, depending
    //on tax rate of varying county/state
    const double RATE = 0.095;
    double food = 0.0;
    double drink = 0.0;
    double tax = 0.0;
    double total = 0.0;
    double tab = 0.0;
    double sum = food + drink + tab;
    tax = sum * RATE;
    total = sum + tax;
    char receiptChoice;

    //Call menuSelection function
    //User input for their menu choice
    //Start Do While loop
    do
    {
        //Call menuSelection Function
        menuSelection();
        //User input for their menu choice
        cin >> menuChoice;
        //Ignore the previous inputs by user, used when user
        //wants to order again
        cin.ignore(100, '\n');
        cout << endl;
        //Start switch statement based on menuChoice
        switch (menuChoice)
        {
        //If user selects int 1, continue with argument
        case 1:
            //Algorithm for previous total to be equal to the summation of the current order with last order
            //for breakfast options
            previousTotal = breakfastOptions(previousTotal);
            break;
        //If user selects int 2, continue with argument
        case 2:
            //Algorithm for previous total to be equal to the summation of the current order with last order
            //for lunch options
            previousTotal = lunchOptions(previousTotal);
            break;
        //If user selects int 3, continue with argument
        case 3:
            //Algorithm for previous total to be equal to the summation of the current order with last order
            //for dinner options
            previousTotal = dinnerOptions(previousTotal);
            break;
        //If user selects int 4, continue with argument
        case 4:
            //User selected int 4 which is quit, so print statement displays program is done
            cout << "Thank you, please come again!" << endl;
            //boolean variable quit = true, therefore end program
            quit = true;
            break;
        }
        //Print statement to ask user if they want to order again
        cout << "Do you want to order again? (Y/N): " << endl;
        //User input for new order
        cin >> newOrder;
        //Algorithm for neworder using toupper function to convert char into uppercase,
        //for program to accept 'n' or 'N' as user input
        newOrder = toupper(newOrder);
        //Start if statement
        //If newOrder == 'N', continue with argument
        //Only choice is 'N', and any other choice will send user back to menu.
        //If user accidently went to menu, they can quit from menuSelection using
        //int 4, and then input 'N' when asked to order again.
        if (newOrder == 'N')
        {
            //Boolean logic, when quit = true, program ends
            quit = true;
        }
        //If newOrder does not equal 'N', continue with argument
        else
            //Print statement to display choice was invalid
            cout << "Here is the menu again." << endl;
            
            
    //End Do loop, and loop while quit == false
    }while (quit == false);

    return 0;
}//End Main Function
