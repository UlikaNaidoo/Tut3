#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//void average(float a)
//{
	//	cout << "Average of Dice Rolls" << a << endl;
//}
//void average(float b)
//{
	//cout << "Average of array" << b << endl;
//}


int main()
{
	int a;
	int z = 0;

	srand(time(0)); // Using number of seconds function to ensure random number
	for (int p = 1; p < 5; p++) // From 1 to user input # of rolls and incremented by 1 to ensure random # not 0
	{
		a = 1 + rand() % 6;
		cout << a << endl; // Using Rand() function to generate numbers randomly
		z = z + a; // Calculating sum of random numbers

	}
	cout << "The Sum is " << z << endl;
	//v = x / z;
	//average(v);


	//int array[5] = { 0, 1, 2, 3, 4 };
	//int sum = 0;
	//int s;

	//for (int v = 0; v < 5; v++)
	//{
	//sum += array[v]; 
	//s = sum / 5;
	//average(s);

	//}
	system("pause");
	return 0;
}


