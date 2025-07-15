#include "Zombie.hpp"

int main(){
	int n = 5;
	Zombie* lays = zombieHorde(n,"Lays");
	for(int i = 0; i < n; i++)
		lays[i].announce();
	delete(lays);
}