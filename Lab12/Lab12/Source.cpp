/*
Cristian Lopez
CS201L
Lab12
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// function prototypes, pre/post conditions 

int main() {

	int user_value;
	cout << "Enter an integer " << endl;
	cin >> user_value;

	// Factorial Function
	long fact_value = factorial_r(user_value);
	cout << "\n" << user_value << "! = " << fact_value << endl;

	// fibonacci Function
	int fibanacci_value = fibonacci_r(user_value);
	cout << "\n" << "fibonacci(" << user_value << ") = " << fibanacci_value << endl;

	int new_value;
	cout << "\nEnter a number to check if it is a prime number " << endl;
	cin >> new_value;
	bool is_prime = is_prime_r(new_value, 2);
	if (is_prime)
	{
		cout << new_value << " is a prime number" << endl;
	}
	else
	{
		cout << new_value << " is a NOT prime number" << endl;
	}

	const int VALUE_SIZE = 5;
	int values[VALUE_SIZE];
	cout << "\nNext we will enter 5 values into an array" << endl;
	for (int index = 0; index < VALUE_SIZE; index++)
	{
		cout << "Enter a value for index " << index << endl;
		cin >> values[index];
	}

	int sum = sum_r(values, VALUE_SIZE);
	cout << "The sum of all the values is " << sum << endl;

	cout << "The list output in reverse is " << endl;
	output_reverse_list_r(values, VALUE_SIZE);

	return 0;
}

// function bodies will go here 

