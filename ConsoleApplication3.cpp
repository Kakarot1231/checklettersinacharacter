// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int ()
{
	std::string input;
	std::cout << "Enter anything dawg: ";
	std::cin >> input;

	bool hasLetter = false;
	bool hasDigit = false;
	bool end = false;

	for (int i = 0; i < input.length(); ++i) {
		char ch = input[i];
		if (input.size() == 1 && ch >= 'a' && ch <= 'z') {
			std::cout << "issa letter dude";
			end = true;
		}
		else if (input.size() == 1) {
			std::cout << "issa number dude";
			end = true;
		}


		if (ch >= 'a' && ch <= 'z') {
			hasLetter = true;
		}
		else if (ch >= '0' && ch <= '9') {
			hasDigit = true;
		}
	}


	if (hasLetter && hasDigit && !end) {
		std::cout << "issa letters and numbers dude\n";
	}
	else if (hasLetter && !end) {
		std::cout << "issa letters dude\n";
	}
	else if (hasDigit && !end) {
		std::cout << "issa number dude\n";
	}
	else if (!end) {
		std::cout << "no letters or numbers dude\n";
	}


	return 0;
}





	

	
	