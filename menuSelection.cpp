//menuSelection.cpp
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

//Start menuSelection Function
void menuSelection()
{
    //Print statement for border
    cout << "--------------------------------------------------------" << endl;
    //Print statement to display to user their menu selection
    cout << "Please select your choice of meal: " << endl;
    cout << "1      Breakfast" << endl;
    cout << "2      Lunch" << endl;
    cout << "3      Dinner" << endl;
    cout << "4      QUIT" << endl;
    cout << "--------------------------------------------------------" << endl;

}//End menuSelection Function
