//Name: Aishik Chakraborty
//Roll Number: 13CS30041
//Assignment No.: 2
//File Name: main.c

#include "myl.h"

//main() to test the created library
int main()
{
	prints("******************* MAIN() for testing library *************************\n");
	prints("\n");
	prints("******************* Testing for Integer ********************************\n");
	//integer testing
	prints("Enter a (signed) integer to read: ");
	int error;		//for checking error
	int n = readi(&error);	//read integer
	if(error == 0)
	{
		prints("The entered integer is: ");
		printi(n);		//print entered integer
		prints("\n");
	}
	else
	{
		do
		{
			prints("There was an error while reading the integer!  ");
			//printi(n);
			prints("\n");
			prints("Enter a valid (signed) integer to read:");
		    n = readi(&error); //read again
			if(error == 0)
			{
				prints("The entered integer is: ");
				printi(n);		//print the integer
				prints("\n");
			}
		}while(error == 1); //loop as long as correct integer is not entered
	}
	
	//prints("Hello\n");
	prints("\n");
	prints("******************* Testing for Float ********************************\n");
	//foating point number testing
	prints("Enter a (signed) floating point number to read: ");
	float f;
	int err_f = readf(&f); //err_f is used for error checking while reading
	if(err_f == 0)
	{
		prints("The entered floating point number is: ");
		printd(f);
		prints("\n");
	}
	else
	{
		do
		{
			prints("There was an error while reading the floating point number!  ");
			//printd(f);
			prints("\n");
			prints("Enter a valid (signed) floating point number to read:");
		    err_f = readf(&f);	//read again
			if(err_f == 0)
			{
				prints("The entered floating point number is: ");
				printd(f);	//print the number
				prints("\n");
			}
		}while(err_f == 1); //loop as long as floating point number is not in correct format
	}
	
	prints("\n");
	prints("**************************************************************************\n");
	
	return 0;
}