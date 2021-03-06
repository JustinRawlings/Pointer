// Justin Rawlings
//11/4/2018
//CSC215
//Pointers

#include "pch.h"
#include <iostream>

using namespace std;

//Program to show basic use of pointers
int main()
{
	//Integer used in pointer
	int funds = 2000;
	//Pointer initialized
	int *Ptr;
	//Sets pointer to funds variable
	Ptr = &funds;
	//Read out of data
	cout << "Funds available: \n" << funds << endl;
	cout << "Address of funds in system: \n" << funds << endl;
	cout << "Hex value of funds: \n" << Ptr << endl;
	cout << "Hex address of funds: \n" << &Ptr << endl;
	cout << "Pointer value of funds: \n" << *Ptr << endl;
	cout << "Ptr is equal to &funds: \n" << *(&funds) << endl;
}