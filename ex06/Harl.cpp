#include "Harl.hpp"


Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}


void Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}


void Harl::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}


void Harl::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level){

    void (Harl::*fptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string list[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int n = -1;
	for(int i = 0; i < (int)list->length(); i++){
		if(list[i] == level)
			n = i;
	}
	int k = n;
	switch(n){
		case(0):
			(this->*fptr[k])();
			k++;
		case(1):
			(this->*fptr[k])();
			k++;
		case(2):
			(this->*fptr[k])();
			k++;
		case(3):
			(this->*fptr[k])();
			k++;
			break;
		default:
		std::cout << "Smth wrong" << std::endl;
	}
	
}
