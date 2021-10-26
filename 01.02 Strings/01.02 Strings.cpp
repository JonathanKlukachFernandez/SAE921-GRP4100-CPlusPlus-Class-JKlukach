// After asking the user his name, first name and age, display a full sentence welcoming him on the program.

#include <iostream>
#include <string>

int main()
{
	std::string name;
    std::cout << "What is your name ?";
    std::cin >> name;

    std::string firstName;
    std::cout << "What is your first name ?";
	std::cin >> firstName;

    std::string age;
    std::cout << "How old are you ?";
    std::cin >> age;

    std::cout << "Welcome to the program " << firstName << " " << name;
    

}

