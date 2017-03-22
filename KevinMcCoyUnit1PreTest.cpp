
//Name: Kevin McCoy

//Date: 1/12/2017

//Program Name: Contractor Calculator

//Description: This simple program is used by a contractor or a customer to calculate and show the cost to renovate a master bathroom. 

#include <iostream>
#include <string>
using namespace std;



int main()
{

	// String to accept the user's name input
	string EnterName;

	// Declared the constant doubles to be used
	double ProfitPercent = 0.20;

	double LaborPercent = 0.20;

	double SalesTax = 0.065;

	double FlrSqFtCost = 2.00;

	double ToiletCost = 120;

	double SinkCost = 210;

	double ShowerCost = 1000;

	double TubCost = 400;


	//Declared the variables either input by the user or used in the calculations 
	int Length, Width, SqFt, NumToilets, NumSinks, NumShowers, NumTubs, TotalToilet, TotalSink, TotalShower, TotalTub;

	double TotalFlrCost, Materials, Overhead, MaterialTax, TotalLabor, TotalDue, AvgSqFtCost;


	//Accepts the user's name
	cout << "Please enter your name " << endl;

	cin >> EnterName;

	//Allows the user to enter their length and widty of their bathroom in order to calculate the sq ft
	cout << "Please enter the length of your bathroom " << endl;

	cin >> Length;

	cout << "Please enter the width of your bathroom " << endl;

	cin >> Width;


	//User then enters in the number of items selected for their bathroom
	cout << "Please enter the number of toilets for your new bathroom: " << endl;

	cin >> NumToilets;

	cout << "Please enter the number of sinks for your new bathroom: " << endl;

	cin >> NumSinks;

	cout << "Please enter the number of showers for your new bathroom: " << endl;

	cin >> NumShowers;

	cout << "Please enter the number of bathtubs for your new bathroom: " << endl;

	cin >> NumTubs;


	//Calculates the bathroom sq ft based on user input
	SqFt = Length * Width;

	//Calculates the total cost of the toilets, sinks, showers, tubs, and flooring based on user's input and calculated
	//based on the constants declared for cost per item
	TotalToilet = NumToilets * ToiletCost;
	TotalSink = NumSinks * SinkCost;
	TotalShower = NumShowers * ShowerCost;
	TotalTub = TubCost * NumTubs;
	TotalFlrCost = FlrSqFtCost * ((SqFt * .12) + SqFt);

	//calculates the total for materials by adding together all of the above calculations
	Materials = (TotalToilet + TotalSink + TotalShower + TotalTub + TotalFlrCost);

	
	//calculates material tax using materials * the salestax constant
	MaterialTax = Materials * SalesTax;

	//calculates total labor using the labor percent constant
	TotalLabor = (Materials * LaborPercent);

	//calculates profit
	Overhead = (Materials + TotalLabor) * ProfitPercent;

	//calculates the total due for the project
	TotalDue = Materials + TotalLabor + MaterialTax + Overhead;

	//calculates average cost per sq ft 
	AvgSqFtCost = TotalDue / SqFt;

	//repeats and outputs the results entered by the user 
	cout << "\n" << endl;
	cout << EnterName << " your job includes the following: " << endl;
	cout << NumToilets << " Toilets" << endl;
	cout << NumSinks << " Sinks" << endl;
	cout << NumShowers << " Showers" << endl;
	cout << NumTubs << " Tubs" << endl << endl;

	cout << "\t Invoice for " << EnterName << endl;

	//outputs the results and the cost breakdown of the project
	cout << "Materials \t " << Materials << endl;
	cout << "Labor \t \t" << TotalLabor << endl;
	cout << "Sales Tax \t" << MaterialTax << endl;
	cout << "Overhead \t" << Overhead << endl << endl;

	cout << "Total Due \t" << TotalDue << endl << endl;

	cout << "Average cost per square foot is " << AvgSqFtCost << endl;





	system("pause");

	return 0;
}

