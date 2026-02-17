/*
CSC 134
M2T2 Receipt Calculator
Brayden Jackson
2/16/26
*/

#include <iostream> 
#include <iomanip> // for setprecision
using namespace std;

int main() {
    // declare variables
    string meal_name = "burger platter"; // change to anything
    int num_meals;
    double meal_price = 5.99;
    double subtotal;
    double tax_rate = 0.08;
    double tip_amount;
    double tax_amount;
    double total_price;

    //get user input   
    cout << "welcome to the restaurant! what meal would you like to order? " << endl;
    cout << "we have " << meal_name << endl;
    cout << endl;
    cout << "how many meals would you like to order? ";
    cin >> num_meals;
    cout << "Tip amount?";
    cin >> tip_amount;

    //calculate total price
    subtotal = num_meals * meal_price;
    tax_amount = subtotal * tax_rate;
    total_price = subtotal + tax_amount + tip_amount;

    //present output
    cout << setprecision(2) << fixed; // format output to 2 decimal places
    cout << endl;
    cout << "your order" << endl << "------------------" << endl;
    cout << num_meals << " x " << "$" << meal_price << endl;
    cout << "subtotal: $" << subtotal << endl;
    cout << "tip: $" << tip_amount << endl;
    cout << "tax: $" << tax_amount << endl;
    cout << "total: $" << total_price << endl;
    Cout << "thank you for dining with us!" << endl;

    return 0; // no error
}