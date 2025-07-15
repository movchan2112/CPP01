#include <iostream>

int main(){
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPTR = &brain;
	std::string &brainREF = brain;
	
	//adress
	std::cout << &brain << " -- brain str" <<std::endl;
	std::cout << brainPTR << " -- brainPTR" <<std::endl;
	std::cout << &brainREF << " -- brainREF" <<std::endl;

	//values
	std::cout << brain << " -- brain str" <<std::endl;
	std::cout << *brainPTR << " -- brainPTR" <<std::endl;
	std::cout << brainREF << " -- brainREF" <<std::endl;

}