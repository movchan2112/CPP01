#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
	std::string _name;
	Weapon *_weapon;
	
public:
	HumanB(const std::string name, Weapon &weapon);
    HumanB(const std::string name);
	~HumanB();

	void attack();
    void setWeapon(Weapon &wp);
};



#endif