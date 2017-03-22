// Kevin McCoy
// Unit 2 Pretest Project
//Project Name: random numbers, average, standard deviation
// 1/22/16

//naming the libraries to include rand (cstdlib), sqrt (cmath), and seprecision (iomanip)
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

	//constants declared
	const int MIN_VALUE = 1, MAX_VALUE = 100, NUM = 5;
	
	//declare the variables for the random numbers
	int rand1, rand2, rand3, rand4, rand5;

	//declare variables for average and standard deviation
	double average, standDev;

	
		//calculates random numbers from 1 to 100
		rand1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		rand2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		rand3 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		rand4 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		rand5 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

		//calculates the mean (average) of the random numbers
		average = (rand1 + rand2 + rand3 + rand4 + rand5) / NUM;

		//calculates standard deviation and utilizes the sqrt function from the cmath library
		standDev = sqrt(pow(rand1 - average, 2) + pow(rand2 - average, 2) + pow(rand3 - average, 2) + pow(rand4 - average, 2) + pow(rand5 - average, 2) / NUM);
		


		//outputs the randon mumbers
		cout << "Random number one is " << rand1 << endl;
		cout << "Random number two is " << rand2 << endl;
		cout << "Random number three is " << rand3 << endl;
		cout << "Random number four is " << rand4 << endl;
		cout << "Random number five is " << rand5 << endl << endl << endl;

		//outputs the average of the 5 random numbers, setprecision(5) for 3 decimal places
		cout << "The average of the random numbers is " << setprecision(5) << average << endl << endl;

		//outputs the standard deviation to 3 decimal places
		cout << "The standard deviation is " << setprecision(5) << standDev << endl << endl;

		system("pause");

		return 0;
}