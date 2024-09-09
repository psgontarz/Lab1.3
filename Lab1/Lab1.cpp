#include <iostream>
using namespace std;

double calcCosts(int, int, double, double, double);

int main()
{
    int tollspertrip;   //Tolls would be an integer because tolls are usually integers or whole numbers.
    int feespertrip;   //Parking fees would be an integer because fees are also usually integers.
    double avgmpg;   //Miles per gallon is tagged under double because exact mpg measurements can include decimals.
    double cpg;   //Cost per gallon is also tagged under double because exact cpg measurements can include decimals too.
    double totalmiles;   //Total trip miles are tagged under double because an exact total mile measurement likely includes decimals.
    cout << "Enter Total Amount Paid to Tolls Here: ";
    cin >> tollspertrip;
    cout << "Enter Total Amount Paid for Parking Here: ";
    cin >> feespertrip;
    cout << "Enter Average Amount of Miles Driven per Gallon of Gasoline Here: ";
    cin >> avgmpg;
    cout << "Enter Cost per Gallon of Gasoline Here: ";
    cin >> cpg;
    cout << "Enter Total Trip Miles Driven Here: ";
    cin >> totalmiles;
    double tripCost = calcCosts(tollspertrip, feespertrip, avgmpg, cpg, totalmiles);
    cout << "Total Trip Cost: " << tripCost;
}

double calcCosts(int tol, int f, double a, double c, double tot)
{
    double gallonsUsed = tot / a;
    double totalGallonPrice = gallonsUsed * c;
    double costs = totalGallonPrice + tol + f;
    return costs;
}