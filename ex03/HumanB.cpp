#include "HumanB.hpp"

HumanB::HumanB(const std::string name, Weapon &weapon)
    :_name(name), _weapon(&weapon){};

HumanB::HumanB(const std::string name)
    :_name(name),_weapon(nullptr){};

HumanB::~HumanB(){};

void HumanB::attack(){
    if(_weapon)
        std::cout << _name <<" attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wp){
    _weapon = &wp;
}