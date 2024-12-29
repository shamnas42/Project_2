#include <iostream>
#include <string>
#include <typeinfo>

// Test for changes

int answer(int first, int second, std::string operation)
{
	if (operation == "+")
	{
		return first + second;
	}
	else if (operation == "-")
	{
		return first - second;
	}
	else if (operation == "*")
	{
		return first * second;
	}
	else if (operation == "/")
	{
		return first / second;
	}
}

int main()
{ 
	int first, second;
	std::string operation, input;
	bool on = true;  

	while (on)
	{
		std::cout << "Type \"off\" to quit\n";
		std::cout << "Enter first number:";
		std::cin >> input; 
		if (input == "quit")
		{
			break;
		}
		else if (typeid(std::stoi(input)) == typeid(int))
		{
			first = stoi(input);
		}

		std::cout << "Enter the operation (+, -, *, /):";
		std::cin >> input;
		if (input == "quit")
		{
			break;
		}
		else if (input == "+" || input == "-" || input == "*" || input == "/")
		{
			operation = input;
		}

		std::cout << "Enter second number:";
		std::cin >> input;
		if (input == "quit")
		{
			break;
		}
		else if (typeid(std::stoi(input)) == typeid(int))
		{
			second = stoi(input);
		}

		std::cout << answer(first, second, operation) << std::endl;
	}

	return 0;
}

