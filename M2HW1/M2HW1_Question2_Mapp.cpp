#include <iostream>
#include <iomanip>

/*
CSC 134
Crate


*/
using namespace std;

int main()
{
    cout << "Mapp's Crate Pricing Corp." << endl;

    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    double length, width, height;
    double volume;
    double cost, charge, profit;

    // crate dimensions
    cout << "Enter length, width, and height in feet. Press ENTER after each value." << endl;
    cin >> length >> width >> height;



    // Calculate volume
    volume = length * width * height;

    // Find cost and price for volume
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    // Find profit
    profit = charge - cost;


    // Output answer
    // two decimal places
    cout << fixed << setprecision(2);
    cout << "That crate is: " << volume << " cubic ft." << endl;
    cout << "Cost to manufacture: $" << cost << endl;
    cout << "Charge to customer:  $" << charge << endl;
    cout << "Our profit:          $" << profit << endl;






    return 0;
}
