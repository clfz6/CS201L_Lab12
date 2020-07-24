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
unsigned long factorial_r(unsigned long value);
int fibonacci_r(int n);
bool is_prime_r(int value, int n);
int sum_r(int list[], int list_size);
void output_reverse_list_r(int list[], int list_size);

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


	// Prime Function
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

	
	// Sum Function
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

	// List reversal Function
	cout << "The list output in reverse is " << endl;
	output_reverse_list_r(values, VALUE_SIZE);
	

	return 0;
}

// function bodies will go here 
unsigned long factorial_r(unsigned long value)
{
	if (value > 0)
	{
		return value * factorial_r(value - 1);
	}
	else
	{
		return 1;
	}
}


int fibonacci_r(int n)
{
	if (n <= 2)
		return 1;
	else
		return fibonacci_r(n - 1) + fibonacci_r(n - 2);
}

bool is_prime_r(int value, int n)
{
	int result;
	result = value % n;
	if (n > sqrt(value))
	{
		if (value == 1)
		{
			return false;
		}
		return true;
	}
	if (value != n)
	{
		if (result == 0)
		{
			return false;
		}
		else
		{
			return is_prime_r(value, n + 1);;
		}
	}
}

int sum_r(int list[], int list_size)
{
	if (list_size == 0)
	{
		return 0;
	}
	return list[list_size - 1] + sum_r(list, list_size - 1);
}

void output_reverse_list_r(int list[], int list_size)
{
	if (list_size > 0)
	{
		cout << " " << list[list_size - 1];
		output_reverse_list_r(list, list_size - 1);
	}
}

