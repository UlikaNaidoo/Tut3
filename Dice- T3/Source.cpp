#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void average(float a)
{
		cout << "Average of Dice Rolls" << a << endl;
}


int main()
{
	int x;
	int y;
	float z;
	int v;
	
	//cout << "Enter Number of Rolls of Dice" << endl;
	//cin >> x;
	//cout << "Enter index of Array" << endl;
	//cin >> y;
	//cout << endl;

	x = 6;
	srand(time(0)); // Using number of seconds function to ensure random number
	for (int p = 1; p = x + 1; p++) // From 1 to user input # of rolls adn incremented by 1
	{ 
		// z += 0;
		cout << 1 + rand() % 6 << endl; // Using Rand() function to generate numbers randomly
	}
	v = x / z;
	average(v);

	int array[5] = { 0, 1, 2, 3, 4 };
	int sum = 0;
	int s;

	for (int v = 0; v < 5; v++)
	{
		sum += array[v]; 
		s = sum / 5;
		cout << "Average of Array is" << s << endl;
	}

	system("pause"); 
}


