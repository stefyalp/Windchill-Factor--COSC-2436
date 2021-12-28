
/*
Stefania Ascencio Lopez Portillo
Program 2
Week 2
COSC 2436
Program that prompts the user to input the wind speed, in miles
per hour, and the temperature in degrees Fahrenheit.
The program then outputs the windchill factor.*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double windchillFactor(double T, double V) //Calculate windchill Factor
{
	double W = 35.74 + 0.6215 * T - 35.75 * pow(V, 0.16) + 0.4275 * T *
		pow(V, 0.16);
	return W;
}
void readinputData() { //Function to prompt the user the winspeed,and temperature
		double T;
	double V;
	cout << "Please enter the temperature in degrees Fahrenheit: " <<
		endl;
	cin >> T;
	cout << "Please enter the wind Speed in miles per hour: " << endl;
	cin >> V;
	cout << "The Windchill factor is: " << endl;
	cout << windchillFactor(T, V) << endl;
}
int main()
{
	readinputData();
	system("pause");
	return 0;
}
