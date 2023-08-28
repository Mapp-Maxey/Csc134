#include <iostream>
using namespace std;


/*
CSC 134
M1LAB - Apple Orchard
Maxey Mapp
8/28/23
Simple interactive store.
*/

int main()
{
    string name = "Mapp ";
    cout << "Welcome to the " << name << "Orchard." << endl;

    // declare our variables
    int apples = 100;
    double price_each = 0.25;

    //print number of apples, price each
    cout << "We have " << apples << " apples for sale." << endl;
    cout << "Cost is $" << cost << " each." <<endl;

    double total_price = apples * price_each;
    // then print the total price
    cout << "The price for all of them is $" << total_price << endl;
    //TODO: ask the user how many to buy

    // TODO: Make prices look "Correct" (e.g %25.00)


    return 0;
}
