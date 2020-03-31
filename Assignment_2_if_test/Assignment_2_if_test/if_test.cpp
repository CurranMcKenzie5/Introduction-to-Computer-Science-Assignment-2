/*
Curran McKenzie
September 13th 2016
Intro to Computer Programming
Assignment 2 If Test
*/


#include <iostream>
using namespace std;
int main()

{

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	cout.precision(2);

	
	double pergizmos, shipping1, shipping2, numgizmos, discount; // declaring variables for the aspects of the program 

	pergizmos = 47.55;
	shipping1 = 68.47;
	shipping2 = 60.00;
	discount = 0.0325;

	cout << "Please enter the amount of Gizmos you would like to purchase  "; // Asks the user to enter the number of gizmos they want

	
	cout.precision(0); 

	cin >> numgizmos; // input the number of gizmos that the user wants 

	
	cout << "The balance due for " << numgizmos << " gizmos is $"; // final balance statement that determines the amount you have to pay

	cout.precision(2);

	if (numgizmos < 1500)
	{
		cout << (numgizmos * pergizmos) + shipping1 << endl; // if less then 1600 gizmos then price per # of gizmos plus 68.47 
	}

	else
		if (numgizmos == 1500)
	{
			cout << (numgizmos * pergizmos) + shipping2 << endl; // if equals to 1600 then price per # of gizmos plus 60.00 
	}

	else

			cout << (numgizmos * pergizmos) - (numgizmos * pergizmos) * discount << endl; // else finds the discount of # of gizmos bought and subtracts it from the orignal amount of # of gizmos 


	system("pause");
	return 0;

}