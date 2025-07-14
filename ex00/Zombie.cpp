#include "Zombie.hpp"

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
	std::cout << _name << " killed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}