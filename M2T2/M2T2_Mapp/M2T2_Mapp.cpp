#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Receipt Calculator" << endl;

    // declare variables
    double meal_price = 0;
    double tax_percent = 0.07; // Cumberland County
    double item_price;
    int num_items;
    string item_name;

    // 1 - Greet the user
    cout << "Welcome to the Din" << endl;

    // 2 - Ask the user for their order
    cout << "What can I get for you today?" << endl;
    cin >> item_name;


    cout << "What's the price on that item?" << endl;
    cin >> item_price;

    cout << "How many " << item_name << "(s) do you want?" << endl;
    cin >> num_items;

    meal_price = item_price * num_items;
    // 3 - Calculate the menu price

    // 4 - Print the receipt
    // tax

    double tax_dollars = meal_price * tax_percent;
    double total_price = meal_price + tax_dollars;
    // tax in $ is meal price
    // add tax to price for total $

    // figure out how to use 2 decimal places
    cout << fixed << setprecision(2);
    // print receipt
    cout << "Order: " << num_items << " " << item_name << "(s)" << endl;
    cout << "Menu price: $" << meal_price << endl;
    cout << "Tax is      $" << tax_dollars << endl;
    cout << "_____________________" << endl;
    cout << "Your Total: $" << total_price << endl;
    cout << "Preciate you for dinin' with us!" << endl;


    return 0;
}
