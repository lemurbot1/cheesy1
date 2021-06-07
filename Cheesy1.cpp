#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Constants needed to perform operations throughout the code
const double cont = 2.76, cost = 4.12, revenue = 1.45;

int main()
{
    // Number of kilos and containers will be whole numbers while prices, such as container cost and profit, will have decimals
    int cheeseKilo, containers;
    double contCost, profit;

    // Code title
    // Repeating asterisks to line up entire program and title
    cout << setw(70) << setfill('*') << "" << endl;
    cout << setw(21) << setfill('*') << "";
    cout << "Input Your Kilograms of Cheese";
    cout << setw(21) << setfill('*') << "" << endl;
    cout << setw(70) << setfill('*') << "" << endl;

    // Get kilograms of cheese from user
    cout << "Please enter the total number of kilograms of cheese produced: ";
    cin >> cheeseKilo;

    // Using user data to determine the number of containers they will need
    // as well as how much it will cost to produce the cheese containers
    // and the expected profit
    containers = cheeseKilo / cont;
    contCost = containers * cost;
    profit = containers * revenue;

    // Print statements to show the user information calculated above
    // formatted to print to the screen neatly (with all results aligned on the right)
    cout << setfill(' ') << "The number of containers to hold the cheese is:" << setw(19) << containers << endl;
    cout << "The cost of producing " + to_string(containers) + " container(s) of cheese is: $" << setw(15) << contCost << endl;
    cout << "The profit from producing " + to_string(containers) + " container(s) of cheese is: $" << setw(11) << profit << endl;

    return 0;
}