#include <iostream>
#include <string>

int main()
{

	//declare variables
	std::string instructorName; 
	std::string yourName;
	std::string adjective;
	std::string color;
	std::string animal;
	std::string food;
	int number;


	//get instructor name
	std::cout << "Please enter your Instructor's Name: ";
	getline(std::cin, instructorName);


	//get your name
	std::cout << "Please enter your name: ";
	getline(std::cin, yourName);


	//get number through 100 and 120
	std::cout << "Please enter a number between 100 and 120: ";
	std::cin >> number;
	while(number < 100 || number > 120)
		{
			std::cout << "Please enter a number betwen 100 and 120: ";
			std::cin >> number;
		}

	std::cin.ignore();

	//get an adjective
	std::cout << "Please enter an adjective: ";
	getline(std::cin, adjective);

	//get a color
	std::cout << "Please enter a color: ";
	getline(std::cin, color);

	//get an animal
	std::cout << "Please enter an animal: ";
	getline(std::cin, animal);

	//get a food
	std::cout << "Please enter a food: ";
	getline(std::cin, food);

	//print the message
	std::cout << "Dear Professor " <<  instructorName << ",\n";
	std::cout << "\nI am sorry that I am unable to turn in my homework at this time.\n"
				"First, I ate a rotten " << food << ", which made me turn " << color << " and\n"
				"extremely ill. I came down with a fever of " << number << ".\n"
				"Next, my " << adjective << " pet " << animal << " must have smelled the remains\n"
				"of the " << food << " on my homework, because he ate it. I am currently\n"
				"rewriting my homework and hope you will accept it late.\n";
	std::cout << "\nSincerely,\n" << yourName; 


}