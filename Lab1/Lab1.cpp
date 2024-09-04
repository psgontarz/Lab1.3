#include <iostream>
using namespace std;

double calcCosts(int, int, double, double, double);

int main()
{
    int tollspertrip;
    int feespertrip;
    double avgmpg;
    double cpg;
    double totalmiles;
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