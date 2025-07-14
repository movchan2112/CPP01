#include "Zombie.hpp"

Zombie::Zombie()
	: _name("NO NAME") {}

Zombie::Zombie(const std::string name)
	: _name(name) {}

Zombie::Zombie(const Zombie& other)
	: _name(other._name) {}

Zombie& Zombie::operator=(const Zombie& other){
	if(this != &other)
		_name = other._name;
	return *this;
}

Zombie::~Zombie(){
	std::cout << this->_name << " killed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string name){
	this->_name = name;
}