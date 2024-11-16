#include "Zombie.hpp"

int main (void)
{
	Zombie	*z;

	z = newZombie("Zombert");
	randomChump("Braineater Bob");
	delete z;
	return (0);
}
