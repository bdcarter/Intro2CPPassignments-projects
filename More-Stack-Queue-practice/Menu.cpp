
#include <iostream>
#include "Queue.hpp"
#include "Stack.hpp"
#include <cstddef>
#include <string>
int main()
{
	Queue queue;
	Stack stack;
	int input;
	int choice;

		std::cout << "---------------------------" << std::endl;
		std::cout << "| Please choose an option.|" << std::endl;
		std::cout << "| 1. Add number           |" << std::endl;
		std::cout << "| 2. Done adding numbers  |" << std::endl;
		std::cout << "| 3. Exit                 |" << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cin >> choice;

	while(choice != 3)
	{

		if(choice < 1 || choice > 3)
		{	std::cout << "Please enter a valid choice" << std::endl;
			std::cout << "---------------------------" << std::endl;
			std::cin >> choice;
		}
		else if(choice == 1)
		{
			std::cout << "Please enter number." << std::endl;
			std::cout << "---------------------" << std::endl;
			std::cin >> input;

			stack.push(input);
			queue.addBack(input);
			std::cout << " Enter 1 to add another, 2 to move on, 3 to quit " << std::endl;
			std::cout << "-------------------------------------------------" << std::endl;
			std::cin >> choice;
		}
	
		else if(choice == 2)
		{
			while(!stack.isEmpty() && !queue.isEmpty())
			{
				stack.peek();
				stack.pop();
				queue.getFront();
				queue.removeFront();
				
			}
			break;
		}

	}
	


return 0;
}