//write include statements
#include "variables.h"
#include <iostream>
#include <iomanip>
//write namespace using statement for cout
std::cout;
std::cin;
std::setprecision;
std::fixed;
std::setw;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cin>> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cin>> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	cout<< setw(12)<< "meal amount:" <<fixed<<setprecision(2)<<meal_amount<<endl;
	cout<<setw(12)<<"sales tax:"<<tax_amount<<endl;
	cout<<setw(12)<<"tip amount:"<<tip_amount<<endl;
	cout<<setw(12)<<"total:"<<total<<endl;
	return 0;
}
