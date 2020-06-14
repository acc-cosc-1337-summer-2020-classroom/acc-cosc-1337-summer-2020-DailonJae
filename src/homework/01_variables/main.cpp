//write include statements
#include "variables.h"
#include <iostream>
#include <iomanip>
//write namespace using statement for cout
using std::cout;
using std::cin;
using std::setprecision;
using std::fixed;
using std::setw;
using std::endl;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout<<"Enter meal amount: ";
	cin>> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout<<"Enter tip rate (decimal): ";
	cin>> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	cout<<setw(12)<< "meal amount:" <<fixed<<setprecision(2)<<meal_amount<<endl;
	cout<<setw(12)<<"sales tax:"<<tax_amount<<endl;
	cout<<setw(12)<<"tip amount:"<<tip_amount<<endl;
	cout<<setw(12)<<"total:"<<total<<endl;
	return 0;
}
