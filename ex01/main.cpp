#include "Zombie.hpp"

int main(){
	Zombie* lays = newZombie("Lays");
	lays->announce();
	randomChump("Kevin");
	delete(lays);
}