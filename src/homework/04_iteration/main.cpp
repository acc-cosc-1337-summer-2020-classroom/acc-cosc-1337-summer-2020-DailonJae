//write include statements
#include "dna.h"
#include <iostream>
//write using statements

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	string dna;
	char again;
	do
	{
		cout<<"Enter 1 for Get GC content, or 2 for Get DNA Complecent: or enter 2 for Get DNA Complecent:\n";
		cin>> choice;
		cout<<"Please enter the DNA string: ";
		cin>>dna;
		if (choice == 1) 
		{
			cout<<get_gc_content(dna);
			
		}
		else if(choice==2) 
		{
			cout<<get_dna_complement(dna);
			
		}
		else{
			cout<<"That is an invalid choice.";
			return 0;
		}
		cout<<"Press 'y' or 'Y' to continue";
		cin>> again;
	} while (again == 'Y' || again == 'y');
	
	
	return 0;
}