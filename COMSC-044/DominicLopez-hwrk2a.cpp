/*
 *Cost of Meal Calculator
 *Dominic Lopez
 *February 11, 2019
 *
 */

#include <iostream>

using namespace std;


int main()
{
	cout << "Welcome to Dominic Lopez's Restaurant" << endl;
	cout << "Enter the cost of the meal: ";
	double costOfMeal;
	cin >> costOfMeal;

	double tax = costOfMeal * 0.09f;
	double tip = costOfMeal * 0.2f;

	cout << "Cost of tax : $" << tax << endl;
	cout << "Cost of tip : $" << tip << endl;
	cout << "Total cost : $" << tax + tip + costOfMeal << endl;

	cin.ignore();
	cin.get();
	

	return 0;
}