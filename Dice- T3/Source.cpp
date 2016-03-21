#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void average(int z, int x)
{
	float v = (float)z / x;
	cout << "Average of Dice Rolls " << v << endl;
	cout << endl;
	
}
void average(float sum, int u)
{
	float l = (float)sum / u;
	cout << "Average of array " << l << endl;
	cout << endl;
}


int main()
{
	int a;
	int z = 0;
	int x;

	cout << "Enter # of rolls " << endl;
	cin >> x;
	cout << endl;

	srand(time(0)); // Using number of seconds function to ensure random number
	for (int p = 0; p < x; p++) // From 1 to user input # of rolls and incremented by 1 to ensure random # not 0
	{
		a = 1 + rand() % 6;
		cout << a << endl; // Using Rand() function to generate numbers randomly
		z = z + a; // Calculating sum of random numbers

	}
	cout << "The Sum is " << z << endl;
	cout << endl;
	//Next 3 lines simply check if overloading function done correctly- easier to find errors
	float u = (float) z / x;
	cout << "The Average is " << u << endl;
	cout << endl;
	average(z, x);
	
	
	//This part of the code deals with the array

	int array[5] = { 0, 1, 2, 3, 5 };
	float sum = 0;
	u = 5;


	cout << "The Array is " << endl;
	for (int v = 0; v < 5; v++)
	{
		cout <<	array[v] << " ";

		sum += array[v]; 
	}

	cout << endl;
	cout << "The sum of the values in the array is " << sum << endl;
	cout << endl;
	//The next 3 lines are to ensure correct use of function overloading
	float s = (float)sum / u;
	cout << "The Average for the numbers in the array is " << s << endl;
	cout << endl;
	average(sum, u);
	

	system("pause");
	return 0;
}


