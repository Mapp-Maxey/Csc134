#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Receipt Calculator" << endl;

    // declare variables
    double meal_price = 5.99;
    double tax_percent = 0.07; // Cumberland County
    double tax_dollars = tax_percent * meal_price;
    double total_price = tax_dollars + meal_price;

    // tax in $ is meal price
    // add tax to price for total $

    // figure out how to use 2 decimal places
    cout << fixed << setprecision(2);
    // print receipt
    cout << "Menu price: $" << meal_price << endl;
    cout << "Tax is      $" << tax_dollars << endl;
    cout << "_____________________" << endl;
    cout << "Your Total: $" << total_price << endl;
    cout << "Preciate you for dinin' with us!" << endl;


    return 0;
}
