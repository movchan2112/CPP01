#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
    std::string _name;
public:
    Zombie(const std::string name);
    Zombie(const Zombie& other);
    Zombie& operator=(const Zombie& other);
    ~Zombie();


    void announce();
};


void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif